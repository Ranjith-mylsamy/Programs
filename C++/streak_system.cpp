// Headers
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <sstream>
#include <sys/stat.h>
#include "custom_header.h"

// Namespaces
using namespace std;

// Function prototypes
string getdate();
void updatedatabase(string date, int gym, int cpp, int streak);
string fetchstreakfromdatabase();
container fetchdatafromdatabase();
int calculation();
bool file_exists(const string &filename);

// Check if file exists
bool file_exists(const string &filename) {
    struct stat buffer;
    return (stat(filename.c_str(), &buffer) == 0);
}

// Driver function
int main() {
    int gym = 0, cpp = 0, streak = 0;
    string date = getdate();
    container data;

    if (!file_exists("database.txt")) {
        updatedatabase(date, gym, cpp, streak);
        // Write one more line for calculation to work correctly on next run
        updatedatabase(date, gym, cpp, streak);
    } else {
        string reset = fetchstreakfromdatabase();
        if (reset != "0") {
            streak = stoi(reset);
            data = fetchdatafromdatabase();
            gym = data.gym;
            cpp = data.cpp;
        }
    }

    char ans;
    cout << "Have you gone to gym ?\n";
    cout << "Press Y/y to confirm or Press N/n to cancel\n";
    cin >> ans;

    if (ans == 'Y' || ans == 'y') {
        if (calculation()) {
            gym++;
            streak++;
        } else {
            gym = 0;
            streak = 0;
        }
        date = getdate();
        updatedatabase(date, gym, cpp, streak);
    } else if (ans == 'N' || ans == 'n') {
        cout << "Have you studied C++ for an hour ?\n";
        cout << "Press Y/y to confirm or Press N/n to cancel\n";
        cin >> ans;

        if (ans == 'Y' || ans == 'y') {
            if (calculation()) {
                cpp++;
                streak++;
            } else {
                cpp = 0;
                streak = 0;
            }
            date = getdate();
            updatedatabase(date, gym, cpp, streak);
        } else {
            cpp = 0;
            streak = 0;
            date = getdate();
            updatedatabase(date, gym, cpp, streak);
        }
    } else {
        cout << "Invalid input\n";
    }

    return 0;
}

// Function to get current date
string getdate() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    char output[50];
    strftime(output, 50, "%d/%m/%Y", &datetime);
    return string(output);
}

// Function to write to database
void updatedatabase(string date, int gym, int cpp, int streak) {
    ofstream database("database.txt", ios::app);
    if (!database) {
        cout << "Error: Unable to open file." << endl;
        return;
    }
    database << "DATE = " << date << " GYM DAYS = " << gym
             << " C++ DAYS = " << cpp << " TOTAL STREAK = " << streak << endl;
    database.close();
}

// Fetch the last streak value
string fetchstreakfromdatabase() {
    string streak_value, line, last_line;
    ifstream database("database.txt");

    if (!database) {
        cout << "Error: Unable to open file." << endl;
        return "0";
    }

    while (getline(database, line)) {
        last_line = line;
    }

    database.close();

    int position = last_line.find("TOTAL STREAK = ");
    if (position != string::npos) {
        return last_line.substr(position + 15);
    } else {
        cout << "Streak not found" << endl;
        return "0";
    }
}

// Fetch gym and cpp counts from last line
container fetchdatafromdatabase() {
    container data{};
    string last_line, line;
    ifstream database("database.txt");

    if (!database) {
        cout << "Error: Unable to open file." << endl;
        return data;
    }

    while (getline(database, line)) {
        last_line = line;
    }

    int pos_gym = last_line.find("GYM DAYS = ");
    if (pos_gym != string::npos) {
        data.gym = stoi(last_line.substr(pos_gym + 11));
    } else {
        cout << "GYM string not found" << endl;
    }

    int pos_cpp = last_line.find("C++ DAYS = ");
    if (pos_cpp != string::npos) {
        data.cpp = stoi(last_line.substr(pos_cpp + 11));
    } else {
        cout << "C++ string not found" << endl;
    }

    return data;
}

// Compare dates to check streak continuity
int calculation() {
    ifstream database("database.txt");
    if (!database) {
        cout << "Error: Unable to open file." << endl;
        return 0;
    }

    string prev_line, current_line, line;
    while (getline(database, line)) {
        prev_line = current_line;
        current_line = line;
    }

    if (prev_line.empty() || current_line.empty()) {
        return 1;  // Assume streak continues if only one entry exists
    }

    string date1_str, date2_str;
    size_t pos1 = prev_line.find("DATE = ");
    size_t pos2 = current_line.find("DATE = ");

    if (pos1 != string::npos && pos2 != string::npos) {
        date1_str = prev_line.substr(pos1 + 7, 10);
        date2_str = current_line.substr(pos2 + 7, 10);
    } else {
        return 0;
    }

    tm date1 = {}, date2 = {};
    date1.tm_mday = stoi(date1_str.substr(0, 2));
    date1.tm_mon = stoi(date1_str.substr(3, 2)) - 1;
    date1.tm_year = stoi(date1_str.substr(6, 4)) - 1900;

    date2.tm_mday = stoi(date2_str.substr(0, 2));
    date2.tm_mon = stoi(date2_str.substr(3, 2)) - 1;
    date2.tm_year = stoi(date2_str.substr(6, 4)) - 1900;

    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    double diff = difftime(time2, time1);

    return (diff <= 86400); // 1 day in seconds
}
