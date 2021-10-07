/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 20 numbers
Week: 11
Lab: 10
***/
#include <iostream>
#include <fstream>
#include<windows.h>
// change there if there is int main1()
using namespace std;

int main3()
{
    system("color 0A"); // my hint
    //creating instance of class input file stream
    ifstream stream("numbers.txt");
    string users_Number;
    cout << "Please enter a number to search from file: ";
    cin >> users_Number;

    string line = "";
    while (getline(stream, line))
    {
        if (line == users_Number)
        {
            cout << "File contains your number";
            system("pause");
            stream.close();
            return 0;
        }
    }
    cout << "File doesn't contain your number !"; // if number doesnt containt
    stream.close();
    system("pause");
    return 0;
}