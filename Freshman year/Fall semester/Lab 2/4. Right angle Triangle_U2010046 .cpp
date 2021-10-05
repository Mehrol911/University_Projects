/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Calculate Area of Right angle Triangle ***/

#include<iostream>     
using namespace std;
int main3()
{
	float a, b, A;  // a = side1, b = side2  A = area of Right angle Triangle

	cout << "Input the value of a and b =  ";
	cin >> a; cin >> b;
	A = (a * b)/2; // Formula to find the area of Right angle Triangle
	cout << "Area of Right angle Triangle A = " << A << endl;


    system("pause");
	return 0;
}

