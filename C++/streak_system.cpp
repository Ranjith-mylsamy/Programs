//Headers
#include<iostream>
#include<string>
#include<ctime>
#include<fstream>
#include<custom_header>

//Namespaces
using namespace std;

//function prototypes
string getdate();
void updatedatabase(std::string,int gym,int cpp,int streak);
std::string fetchstreakfromdatabase();

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

//driver function
int main () {
    int gym, cpp, streak;
    std::string reset = fetchstreakfromdatabase();
    if(reset == "0")
    {
        gym     = 0;
        cpp     = 0;
        streak  = 0;
    }
    char ans[1];
    int result;

    cout<<"Have you gone to gym ?"<<"\n";
    cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
    cin>>ans;
    if(ans == "Y" || "y")
    {
        gym++;
    }
    else if (ans == "N" || "n")
    {
        cout<<"Have you studied C++ for an hour ?"<<"\n";
        cout<<"Press Y/y to confirm or Press N/n to cancel"<<"\n";
        cin>>ans;

        if (ans == "Y" || "y")
        {
            cpp++;
            std::string date = getdate();
            std::cout << date << "\n";

            if(result == 1)
            {
                streak++;
            }
            else
            {
                streak = 0;
            }
        }
        else
        {
            streak = 0;
        }
    }
    else
    {
        cout<<"Invalid input"<<"\n";
    }

  return 0;
}
