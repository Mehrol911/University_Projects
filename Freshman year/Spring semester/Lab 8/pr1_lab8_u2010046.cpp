/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. create a database
Week: 9
Lab: 8
***/
#include <iostream>
// change if there is int main1()
#include <windows.h>
using namespace std;
// creating a staff class 
class Staff
{
protected:
    int code;
    string name;

public:
    Staff() //Default constructor
    {
        cout << "Write staff information: \n";
        cout << "Code: ";
        cin >> code;
        cout << "Name: ";
        cin >> name;
    }
     void printStaffInfo() //outputs staff information
    {
        cout << "Staff information" << endl;
        cout << " - Code: " << code << endl;
        cout << " - Name: " << name << endl;
    }
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
// teacher in staff class
class Teacher : public Staff
{
protected:
    string subject;
    int publicationCount;

public:
    Teacher()
    {
        cout << "Subject name: ";
        cin >> subject;
        cout << "Number of publications: ";
        cin >> publicationCount;
    }
    void printTeacherInfo()
    {
        printStaffInfo(); // here is a parent class
        cout << " - Staff type: Teacher \n";
        cout << " - Subject name: " << subject << endl;
        cout << " - Number of publications: " << publicationCount << endl;
    }
    void setSubject(string subject)
    {
        this->subject = subject;
    }
    string getSubject()
    {
        return subject;
    }
};
// officer in staff class
class Officer : public Staff
{
protected:
    string grade;

public:
    Officer()
    {
        cout << "Grade: ";
        cin >> grade;
    }
    void printOfficerInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Officer \n";
        cout << " - Grade: " << grade << endl;
    }
    void setGrade(string grade)
    {
        this->grade = grade;
    }
    string getGrade()
    {
        return grade;
    }
};
// typist in staff class
class Typist : public Staff
{
protected:
    int speed;

public:
    Typist()
    {
        cout << "Speed: ";
        cin >> speed;
    }
    void printTypistInfo()
    {
        cout << " - Speed: " << speed << endl;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
};
// regulartypist in typist class
class RegularTypist : public Typist
{
protected:
    double monthlySalary;

public:
    RegularTypist()
    {
        cout << "Monthly salary: ";
        cin >> monthlySalary;
    }
    void printRegularTypistInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Regular typist" << endl;
        printTypistInfo();
        cout << " - Monthly salary: " << monthlySalary << endl;
    }
    void setMonthlySalary(double monthlySalary)
    {
        this->monthlySalary = monthlySalary;
    }
    double getMonthlySalary()
    {
        return monthlySalary;
    }
};
// casualtypist in typist class
class CasualTypist : public Typist
{
protected:
    double dailyWages;

public:
    CasualTypist()
    {
        cout << "Daily wages: ";
        cin >> dailyWages;
    }
    void printCasualTypistInfo()
    {
        printStaffInfo();
        cout << " - Staff type: Casual typist" << endl;
        printTypistInfo();
        cout << " - Daily wages: " << dailyWages << endl;
    }
    void setDailyWages(double dailyWages)
    {
        this->dailyWages = dailyWages;
    }
    double getDailyWages()
    {
        return dailyWages;
    }
};

int main1() // change here if there is int main1()
{
    system("color A0"); // my hint
    Teacher kirtiSeth;
    system("cls");  //clears screen
    kirtiSeth.printTeacherInfo();
    //prints "Press any key to continue" message
    system("pause");
    //clears screen
    system("cls");
    Officer academicOfficer;
    system("cls");
    academicOfficer.printOfficerInfo();
    system("pause");
    system("cls");

    RegularTypist someRandomTypist; 
    system("cls");
    someRandomTypist.printRegularTypistInfo();
    system("pause");
    system("cls");

    CasualTypist randomCasualTypist;
    system("cls");
    randomCasualTypist.printCasualTypistInfo();
    system("pause");

    return 0;
}
