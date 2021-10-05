/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Calculate Area of Scalene Triangle ***/

#include<iostream>     
using namespace std;
int main1()
{   
    float a, b, c, s, A;  // a = side1, b = side2, c = side3,  s = semi perimetr, A = area of Scalene Triangle

	cout << "Input the value of a, b and c = ";
	cin >> a; cin >> b; cin >> c;

	s = (a+b+c)/2; // Formula to find the semi perimetr of triangle
	cout << "Semi perimetr s = " << s << endl;    // If you want you can not output s.
	A = sqrt(s*(s-a)*(s-b)*(s-c)) ; // Formula to find the area of Scalene Triangle - Heron's formula
	cout << "Area of Scalene Triangle A = " << A << endl;


    system("pause");
	return 0;
}

