/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2. create a person class
Week: 9
Lab: 8
***/
#include <iostream>
// change if there is int main2()
#include <windows.h>
using namespace std;
// created a person class
class Person 
{
protected:
    int code;
    string name;

public:
    void setCode(int code)
    {
        this->code = code;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
};
class Account : virtual protected Person
{
protected:
    float salary;

public:
    // we are using setters and getters
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    float getSalary()
    {
        return salary;
    }
};
class Admin : virtual protected Person
{
protected:
    int experience;

public:

    void setExperience(int experience)
    {
        this->experience = experience;
    }
    int getExperience()
    {
        return experience;
    }
};
// this master class is connected to protected classes named admin and account
class Master : protected Account, protected Admin
{
public:
    Master()
    {
        getInformationFromConsole();
    }
    void getInformationFromConsole() // you can get information from console
    {
        cout << "Write required information as below said: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Code: ";
        cin >> code;
        cout << "Salary: ";
        cin >> salary;
        cout << "Experience(years): ";
        cin >> experience;
    }
    void printInformation() // it will print information
    {
        cout << "Information: \n";
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience(years): " << experience << endl;
    }
};

int main() // change here if there is int main2()
{
    system("color 0A"); // my hint
    Master MEKHROL;
    system("pause");
    system("cls");
    //showing Master information
    MEKHROL.printInformation();
    system("pause");
    system("cls");

    cout << "Updating information: \n";
    MEKHROL.getInformationFromConsole();

    system("pause");
    system("cls");

    return 0;
}