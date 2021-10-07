/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. Create a class Person with two private members name and telephone number.
Week: 12
Lab: 11 
***/

#include <iostream>
#include <fstream>
#include<windows.h>
// change there if there is int main1()
using namespace std;
class Person
{
private:
    string name, telNumber;

public:
    void setData(string name, string telNumber)
    {
        this->name = name;
        this->telNumber = telNumber;
    }
    void printData()
    {
        cout << "Name: " << name << " TelNumber: " << telNumber << endl;
    }
};

//get input from user then store or write to the file
void writeToFile()
{
    ofstream ofs;
    Person person;
    char Choice;
    string name, telNumber;
    //opening binary file (binary file will be created if it is not exist)
    ofs.open("data", ios::binary);

    while (true)
    {
        cout << "Enter a or A to write to the file: ";
        cin >> Choice;
        if (Choice == 'a' || Choice == 'A')
        {
            cout << "Name: ";
            cin >> name;
            cout << "Tel Number: ";
            cin >> telNumber;
            person.setData(name, telNumber);
            //writing to the binary file
            ofs.write((char*)&person, sizeof(Person));
        }
        else
        {
            // other inputs instead of a or A
            break;
        }
    }
    ofs.close();
}
// read from file
void readFromFile()
{
    ifstream ifs;
    Person person;
    ifs.open("data", ios::binary); // open binary files
    system("cls");
    cout << "Data inside the file: " << endl; 
    while (ifs.read((char*)&person, sizeof(Person))) // reading content of binary file
    {
        person.printData();
    }
    ifs.close();
}
// main function
int main1()
{
    system("color 0A"); // my hint
    writeToFile();
    readFromFile();
    return 0;
}