/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  8. Program to display arithmetic operator using switch case. ***/

#include<iostream>     
using namespace std;
int main8()  // please change here to int main()
{
	int m, b;  // Mekhrol Bazarov
	cout << "Input the value of m = ";
	cin >> m;
	cout << "Input the value of b = ";
	cin >> b;

	char ch;
	cout << "Enter which operation you want to perform: "; // +,-,*,/,%   use them.
	cin >> ch;

	switch (ch)
	{
	case '+': cout << "Sum = " << m + b << endl;
		break; 
	case '-': cout << "Difference = " << m - b << endl;
		break;
	case '*': cout << "Multiplication = " << m * b << endl;
		break;
	case '/': cout << "Division = " << m / b << endl;
		break;
	case '%': cout << "Modulus = " << m % b << endl;
		break;

	default: cout << "Wrong input. ENTER +, -, *, / or %" << endl;    
		break;
	}


	system("pause");
	return 0;
}