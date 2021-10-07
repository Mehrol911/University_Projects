/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. The class Person with attributes name(string) and age(int).(both are private)
The class contains three functions.
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class Person 
{
private:
    string Name;
    int Age;
public:
    void display() 
    {
        cout << " Name: " << Name << " Age: " << Age;
    }
    Person() // with no parametr
    {
        Name = " ";
        Age = 18;
    }
    Person(string Name, int Age)  // with parameter 
    {
        this->Name = Name;
        this->Age = Age;
    }
};

int main1() // change here to int main() 
{
    system("Color 0A"); // my hint
    Person p1;
    p1.display();

    system("pause");
    return 0;
}
