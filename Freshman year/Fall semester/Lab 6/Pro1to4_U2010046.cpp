/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  4 programs (after running them you can choose them) ***/
#include<iostream>
using namespace std;
void message0()//You see this Message when you run the program
{
    cout << "Write 1 to find Area of a Circle" << endl << "Write 2 to find Factorial of a number" << endl << "Write 3 to convert Time to Minutes " << endl << "Write 4 to Sum the Series" << endl << "Enter 0 to exit the program" << endl << endl;
}
void message1()
{
    cout << "Program to find a factorial of a number" << endl;
}
void message2()
{
    cout << "Program converting Time to Minuts" << " , " << "You must enter three numbers." <<"Following order hour, minute, second"<< endl;
}
void area()
{
    int r;   // simple program
    float Area, pi = 3.14;  
    cout << "Write the value of r: ";   //input a number
    cin >> r;
    cout << "Inputted value of r= " << r << endl;  
    Area = pi * (r * r);   //Formula of Area of a Circle
    cout << "Area of a Circle= " << Area << endl;  //Final result of the area
}
void time()
{
    message2();
    float hour, min, sec, sum;
    cout << "Write the time: "; // user inputs three number
    cin >> hour >> min >> sec;  
    cout << "Hours= " << hour << endl << "Minutes= " << min << endl << "Seconds= " << sec << endl;  //Inputted numbers will appear
    hour *= 60;  
    sec /= 60;  
    sum = hour + min + sec; //sum of hour + minute + second
    cout << "Sum of all converted time= " << sum << endl;  //Final result
}
int fact(int n);//fact is for factorial and n is for number
float series();
int main() // (the main function)
{
   
    int m;//m is a first letter of my name
    cout << "HELLO! This is me MEKHROL BAZAROV FROM SECTION 003" << endl;
   
    while (1)
    {
        cout << endl;
        cout << "Write 1 to find Area of a Circle" << endl << "Write 2 to find Factorial of a number" << endl << "Write 3 to convert Time to Minutes " << endl << "Write 4 to Sum the Series" << endl << "Enter 0 to exit the program" << endl << endl;
        cout << "Enter 1 to 4 to choose a program: = ";
        cin >> m;
        switch (m)
        {
        case 1: area();
            break;
        case 2:
            message1();
            int num;
            cout << "Write a number to find factorial: ";
            cin >> num; //User inputs a number
            cout << "Factorial of  " << num << "  is equal to = " << fact(num) << endl; //Final result
            break;
        case 3: time();
            break;
        case 4:series();
            break;
        case 0: exit(0);
        default:cout << "Enter another number!!!!" << endl;
        }
    }
    system("pause");
    return 0;
}
int fact(int n)//Function definition
{
    if (n == 0)
        return 1;  //If entered number is 0 then it returns to 1
    return n * fact(n - 1);   //formula to find factorial of a number
}
float series()
{
    double n, sum = 0, m = 1;   // m is a first letter of my name 
    cout << "Input a number n: = ";   // for example if you put 3 it will calculate 1/1!+4/2!+27/3!=7.5 or if you put 4 1/1!+4/2!+27/3!+256/4!=18.1667
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            m = m * i / j;
        }
        sum = sum + m;
        m = 1;
    }
    cout << "Sum: = " << sum << endl;
    return sum;
}
