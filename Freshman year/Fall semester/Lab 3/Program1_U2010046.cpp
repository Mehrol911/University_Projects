/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Program to convert temperature from degree centigrade to Farenheit  ***/

#include<iostream>     
using namespace std;
int main1()
{                                                                           //U2010046
    float far, cels;              // MEKHROL BAZAROV
    char option;                  // This kind of programs are really helpful especially in physics!
                                  // Especially converting quantities and so on. // THANKS
    cout << "Choose one option out of two  :" << endl;
    cout << "1. Celsius to Fahrenheit." << endl;
    cout << "2. Fahrenheit to Celsius." << endl;             
    cin >> option; // You have to write 1 or 2

    if (option == '1')
    {
        cout << "Write the temperature in Celsius: ";
        cin >> cels;

        far = (1.8 * cels) + 32.0; //formula degree centigrade to fahrenheit
        cout << "Temperature in degree Fahrenheit: " << far << " F" << endl; // After calculating the answer it will add F near the answer
    }
   
    else if (option == '2')
    {
        cout << "Write the temperature in Fahrenheit: ";
        cin >> far;

        cels = (far - 32) / 1.8; // formula fahrenheit to degree centigrade
        cout << "Temperature in degree Celsius: " << cels << " C" << endl; // After calculating the answer it will add C near the answer
    }
    else
    {
        cout << "WRONG INPUT. WRITE 1 or 2." << endl;
    }
	system("pause");
	return 0;
}