#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//function prototypes
string getdate();

//function definition
std::string getdate()
{
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    char output[50];

    strftime(output, 50, "%d %B %Y %A", &datetime);

    return std::string(output);
}

int main () {
    std::string date = getdate();
    std::cout << date << "\n";

  return 0;
}