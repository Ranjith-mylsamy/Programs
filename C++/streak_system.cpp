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
    container data;

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
    char ans;

    cout<<"Have you gone to gym ?"<<"\n";
    cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
    cin>>ans;
    if(ans == 'Y' || 'y')
    {
        if(calculation() == 1)
        {
            gym++;
            streak++;
            date    = getdate();
            updatedatabase(date,gym,cpp,streak);
        }
        else
        {
            gym     = 0;
            streak  = 0;
            date    = getdate();
            updatedatabase(date,gym,cpp,streak);
        }
    }
    else if (ans == 'N' || 'n')
    {
        cout<<"Have you studied C++ for an hour ?"<<"\n";
        cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
        cin>>ans;

        if (ans == 'Y' || 'y')
        {
            if(calculation() == 1)
            {
                cpp++;
                date = getdate();
                streak++;
                updatedatabase(date,gym,cpp,streak);
            }
        }
        else
        {
            streak = 0;
            cpp    = 0;
            date   = getdate();
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

    strftime(output, 50, "%d %m %Y %A", &datetime);

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
    return "0";
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
        data.cpp = stoi(cpp_str_end.substr(position + 10));
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
    std::string n_prev_line,n_EOL;
    struct tm date_1,date_2;
    time_t now;
    time_t before;

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
        istringstream iss(prev_line.substr(position + 6));
        string word;
        int wordIndex = 0;
        iss >> std::ws;
        while (iss >> word) {
            wordIndex++;
            if (wordIndex == 1) {  // first word
                n_prev_line = word;
                break;
            }
        }

    }
    else
    {
        cout<<"DATE = string not found"<<endl;
    }
    
    //I am finding streak in end of file (i.e:last line)
    int position = EOL.find("DATE =");
    if(position != std::string::npos)
    {
        istringstream iss(EOL.substr(position + 6));
        string word;
        int wordIndex = 0;
        iss >> std::ws;
        while (iss >> word) {
            wordIndex++;
            if (wordIndex == 1) {  // first word
                n_EOL = word;
                break;
            }
        }

    }
    else
    {
        cout<<"DATE = string not found"<<endl;
    }

    date_1.tm_mday = stoi(n_prev_line.substr(0,2));
    date_1.tm_wday = stoi(n_prev_line.substr(3,2))- 1;
    date_1.tm_year = stoi(n_prev_line.substr(6,4))- 1900;
    before = mktime(&date_1);

    date_2.tm_mday = stoi(n_EOL.substr(0,2));
    date_2.tm_wday = stoi(n_EOL.substr(3,2)) - 1;
    date_2.tm_year = stoi(n_EOL.substr(6,4)) - 1900;
    now = mktime(&date_2);

    if(difftime(now,before) < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
