/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2.Construct a class to hold personnel records class name is Records. Use the following data members, and keep them private:
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class Records 
{
private:
    string Name;
    float Salary;
    string Date_Of_Birth;

public:
    Records() // no parametr it is default
    {
        Name = " ";
        Salary = 0.00;
        Date_Of_Birth = " ";
    }
    Records(string Name, float Salary, string Date_Of_Birth) // with 3 parameters
    {
        this->Name = Name;
        this->Salary = Salary;
        this->Date_Of_Birth = Date_Of_Birth;
    }
    void inputName(string InputName)  // individual name
    {
        Name = InputName;
    }
    void inputSalary(float InputSalary)  // individual salary
    {
        Salary = InputSalary;
    }
    void inputDateOfBirth(string InputDate_Of_Birth)  // individual date of birth
    {
        Date_Of_Birth = InputDate_Of_Birth;
    }
    void display() {
        cout << "Name: " << Name << " Salary: " << Salary << " Date of birth: " << Date_Of_Birth << endl;
    }
};
int main2() // change here to int main() 
{    
    system("Color 0A"); // my hint
    Records userRecord("MEKHROL", 9119, "01.12.2002");
    Records *userPointerRecord = &userRecord; 
    userRecord.display(); // we are using dot operator
    userPointerRecord->display(); // displaying same thing with pointer
    system("pause");
    return 0;
}