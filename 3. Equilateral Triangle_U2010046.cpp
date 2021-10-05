/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Calculate Area of Equilateral Triangle ***/

#include<iostream>     
using namespace std;
int main2()
{
	float a, A;  // a = side, A = area of Equilateral Triangle

	cout << "Input the value of a = ";
	cin >> a; 
    A = (sqrt(3)*a*a)/4; // Formula to find the area of Equilateral Triangle
	cout << "Area of Equilateral Triangle A = " << A << endl;


    system("pause");
	return 0;
}

