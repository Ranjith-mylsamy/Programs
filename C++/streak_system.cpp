//Headers
#include<iostream>
#include<string>
#include<ctime>
#include<fstream>
#include<sstream>
#include<custom_header>

//Namespaces
using namespace std;

//function prototypes
string getdate();
void updatedatabase(std::string date,int gym,int cpp,int streak);
std::string fetchstreakfromdatabase();
container fetchdatafromdatabase();
int calculation();

//driver function
int main () {
    //Variables
    int gym, cpp, streak;
    std::string date;
    std::string reset = fetchstreakfromdatabase();

    if(reset == "0")
    {
        gym     = 0;
        cpp     = 0;
        streak  = 0;
    }
    else
    {
        streak  = stoi(fetchstreakfromdatabase()); //converting string to integer
        data    = fetchdatafromdatabase();
        gym     = data.gym;
        cpp     = data.cpp;
    }
    char ans[1];

    cout<<"Have you gone to gym ?"<<"\n";
    cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
    cin>>ans;
    if(ans == "Y" || "y")
    {
        gym++;
        streak++;
        date = getdate();
        updatedatabase(date,gym,cpp,streak);
    }
    else if (ans == "N" || "n")
    {
        cout<<"Have you studied C++ for an hour ?"<<"\n";
        cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
        cin>>ans;

        if (ans == "Y" || "y")
        {
            cpp++;
            date = getdate();
            streak++;
            updatedatabase(date,gym,cpp,streak);
        }
        else
        {
            streak = 0;
            date = getdate();
            updatedatabase(date,gym,cpp,streak);
        }
    }
    else
    {
        cout<<"Invalid input"<<"\n";
    }

  return 0;
}

//function definition
std::string getdate()
{
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    char output[50];

    strftime(output, 50, "%d %B %Y %A", &datetime);

    return std::string(output);
}

void updatedatabase(std::string date,int gym,int cpp,int streak)
{
    ofstream database("database.txt",ios::app);

    if(!database)
    {
        cout<<"Error: Unable to open file."<<endl;
    }

    database << "DATE =" << date << "GYM DAYS =" << gym << "C++ DAYS =" << cpp << "TOTAL STREAK =" << streak << endl;

    // close the file
    database.close();
}

std::string fetchstreakfromdatabase()
{
    std::string streak_value,line,line_end;

    ifstream database("database.txt");
    
    if(!database)
    {
        cout<<"Error: Unable to open file."<<endl;
    }

    while(getline(database,line))
    {
        line_end = line;
    }

    database.close();

    int position = line_end.find("TOTAL STREAK =");
    if(position != std::string::npos)
    {
        return streak_value = (line_end.substr(position + 14));
    }
    else
    {
        cout<<"Streak not found"<<endl;
    }
}

container fetchdatafromdatabase()
{
    std::string gym_str_end,gym_str,cpp_str,cpp_str_end;

    ifstream database("database.txt");
    if(!database)
    {
        cout<<"Error: Unable to open file."<<endl;
    }

    while(getline(database,gym_str))
    {
        gym_str_end = gym_str;
    }

    int position = gym_str_end.find("GYM DAYS =");
    if(position != std::string::npos)
    {
        data.gym = stoi(gym_str_end.substr(position + 10));
    }
    else
    {
        cout<<"GYM string not found"<<endl;
    }

    while(getline(database,cpp_str))
    {
        cpp_str_end = cpp_str;
    }

    int position = cpp_str_end.find("C++ DAYS =");
    if(position != std::string::npos)
    {
        data.gym = stoi(cpp_str_end.substr(position + 10));
    }
    else
    {
        cout<<"C++ string not found"<<endl;
    }
    return data;
}

int calculation()
{
    std::string prev_line,EOL,line;
    int n_prev_line,n_EOL;

    ifstream database("database.txt");

    while(getline(database,line))
    {
        prev_line = EOL;
        EOL       = line;
    }

    //I am finding streak in previous line
    int position = prev_line.find("DATE =");
    if(position != std::string::npos)
    {
        n_prev_line = stoi(prev_line.substr(position + 6));
    }
    else
    {
        cout<<"DATE = string not found"<<endl;
    }

    //I am finding streak in end of file (i.e:last line)
    int position = EOL.find("DATE =");
    if(position != std::string::npos)
    {
        n_EOL = stoi(EOL.substr(position + 6));
    }
    else
    {
        cout<<"DATE = string not found"<<endl;
    }

    if(n_EOL > n_prev_line)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

istringstream iss(str);
string word;
int wordIndex = 0;
string dateValue;

while (iss >> word) {
    wordIndex++;
    if (wordIndex == 2) {  // second word
        dateValue = word;
        break;
    }
}
