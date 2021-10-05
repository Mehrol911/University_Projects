/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Program to find greatest in 3 numbers  ***/

#include<iostream>     
using namespace std;
int main3()
{   
	int num1 = 20, num2 = 100, num3 = 46;     // THIS IS MY ID NUMBER! You can also write other numbers
	int large;                                // to check if the program is true
	large = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	cout << "The largest number = " << large << endl;


	system("pause");
	return 0;
}