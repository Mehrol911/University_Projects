/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2. Write an interactive menu driven program that will access the file created in program no. 1 and implement the following tasks:
Week: 12
Lab: 11
***/
#include <iostream>
#include <fstream>
#include<windows.h>
// change there if there is int main2()
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
    string getName()
    {
        return name;
    }
    string getTelNumber()
    {
        return telNumber;
    }
};
Person person;
// get person's number by name
void getTelNumberByName()
{
    
    ifstream ifs;
    ifs.open("data", ios::binary); // reading in binary mode
    system("cls"); // it clears the screen
    string name;
    cout << "Write name to get corresponding tel number: ";
    cin >> name;
    while (ifs.read((char*)&person, sizeof(Person)))
    {
        if (person.getName() == name)
        {
            cout << person.getTelNumber() << " is the tel number you want" << endl;
            ifs.close();
            return;
        }
    }
    ifs.close();
    cout << "Name not found;" << endl;
}
// get person's name by number
void getNameByTelNumber()
{
    ifstream ifs;
    ifs.open("data", ios::binary);
    system("cls");
    string telNumber;
    cout << "Enter tel number to get corresponding name: ";
    cin >> telNumber;
    while (ifs.read((char*)&person, sizeof(Person)))
    {
        if (person.getTelNumber() == telNumber)
        {
            cout << person.getName() << " is the name you want" << endl;
            ifs.close();
            return;
        }
    }
    ifs.close();
    cout << "Tel number not found" << endl;
}

void deleteRecordByTelNumber()
{

    ifstream ifs;
    ofstream ofs;
    ofstream tempOfs;
    system("cls");
    tempOfs.open("temp", ios::binary);
    ofs.open("data", ios::binary | ios::app);
    ifs.open("data", ios::binary);

    string telNumber;
    bool isFound = false;
    cout << "Enter tel number of the record you want to delete: ";
    cin >> telNumber;

    while (ifs.read((char*)&person, sizeof(Person)))
    {
        if (person.getTelNumber() != telNumber)
        {
            tempOfs.write((char*)&person, sizeof(Person));
        }
        else
        {
            isFound = true;
        }
    }
    remove("data"); // deleting
    rename("temp", "data");// renaming 
    if (isFound)
    {
        cout << "Record with tel number of " << telNumber << " is deleted" << endl;
    }
    ifs.close();
    ofs.close();
    tempOfs.close();
}

void addRecord()
{
    ofstream ofs;
    ofs.open("data", ios::binary | ios::in | ios::out);
    system("cls");
    int positionToAdd;
    string name, telNumber;
    cout << "Enter the position to add new record: ";
    cin >> positionToAdd;
    cout << "Name: ";
    cin >> name;
    cout << "Tel number: ";
    cin >> telNumber;
    person.setData(name, telNumber);
    int realPositionToAdd = sizeof(Person) * (positionToAdd - 1);
    ofs.seekp(realPositionToAdd);
    ofs.write((char*)&person, sizeof(Person));
    ofs.close();
}

void showFileContents()
{
    ifstream ifs;
    ifs.open("data", ios::binary);

    system("cls");
    cout << "Data inside the file: " << endl;
    while (ifs.read((char*)&person, sizeof(Person))) // reading contents
    {
        person.printData();
    }
    ifs.close();
}

void showMenu()
{
    int Choice;
    while (true)
    {
        cout << "PROGRAM MENU \n";
        cout << "1 Get tel number by name \n";
        cout << "2 Get name by tel number \n";
        cout << "3 Delete record by tel number \n";
        cout << "4 Add record to the specific location \n";
        cout << "5 Print file contents \n";
        cout << "6 Exit \n\n";
        cout << "Your choice: ";
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            getTelNumberByName();
            break;
        case 2:
            getNameByTelNumber();
            break;
        case 3:
            deleteRecordByTelNumber();
            break;
        case 4:
            addRecord();
            break;
        case 5:
            showFileContents();
            break;
        default:
            exit(0);
        }
        system("pause");
    }
}

//main function
int main()
{
    system("color 0A"); // my hint
    showMenu();
    return 0;
}