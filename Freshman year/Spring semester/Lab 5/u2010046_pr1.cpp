/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1.Define a class DayTime:
***/ 
// week 6 Lab-5
#include<iostream>
#include<windows.h>
using namespace std;
// check if there is int main()
class DayTime 
{
private:
    int hour, minute, second;
public:
    DayTime(int hour, int minute, int second) 
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    int getHour() const 
    {
        return this->hour;
    }
    int getMinute() const 
    {
        return this->minute;
    }
    int getSecond() const 
    {
        return this->second;
    }
    int getasSeconds() const 
    {
        return hour * 60 * 60 + minute * 60 + second;
    }
    void operator ++()  //increment operator for second
    {
        this->second++; 
    }
    void operator --() //decrement operator for minute
    {
        this->minute--;
    }
};
int main() // change here
{
    system("Color 0A"); // my hint
    //declaring variables
    int hour, minute, second;
    cout << "Write the time you want" << endl;
    cout << "Hour: "; cin >> hour;
    cout << "Minute: "; cin >> minute;
    if(minute >= 60) // code for if you write 78 minutes it will be added to hour +1, and minute will be 18
    {
        hour += minute / 60;
        minute = minute % 60;
    }
    cout << "Second: "; cin >> second;
    if (second >= 60) // code for if you write 67 seconds it will be added to minute +1, and second will be 7
    {
        minute += second / 60;
        second = second % 60;
    }
    DayTime exampleDayTime(hour, minute, second); // creating object
    system("cls");
    while (1) 
    {  // menu
        cout << "\n\t\t\t\t\tMENU" << endl;
        cout << "\t\t\t\t\t1. Display time" << endl;
        cout << "\t\t\t\t\t2. Display time in seconds" << endl;
        cout << "\t\t\t\t\t3. Increment seconds" << endl;
        cout << "\t\t\t\t\t4. Decrement seconds" << endl;
        cout << "\t\t\t\t\t0. Exit" << endl;
        int choice;
        cin >> choice;
        system("cls"); // clears screen after choice
        switch (choice)
        {
        case 1:
            cout << "Hour: " << exampleDayTime.getHour() 
                << " Minute: " << exampleDayTime.getMinute() 
                << " Second: " << exampleDayTime.getSecond()<<endl;
            Sleep(4044); 
            break;
        case 2:
            cout << "Time in seconds: " << exampleDayTime.getasSeconds() << endl;
            Sleep(4046);
            break;
        case 3:

            ++exampleDayTime;
            cout << "Second is increased by 1\n\n";
            Sleep(2046); // 20 year, 46 my last id number
            break;
        case 4:
            --exampleDayTime;
            cout << "Second is decreased by 1\n\n";
            Sleep(2046); // 20 year, 46 my last id number
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "Enter correct value menu number !";
            break;
        } 
        system("cls");
    }
    return 0;
}