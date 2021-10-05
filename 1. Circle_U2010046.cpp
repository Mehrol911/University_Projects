/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Calculate Area and Circumference of Circle  ***/

#include<iostream>     
using namespace std;
int main()
{
	float r, A, L;  // r = radius of circle, A = area of circle  L = circumference of circle

	cout << "Input the value of r = ";
	cin >> r;
	A = 3.14 * r * r; // Formula to find the area of circle
	cout << "Area of circle A = " << A << endl;
	L = 2 * 3.14 * r; // Formula to find the circumference of circle
	cout << "Circumference of cirle L = " << L << endl; 



	system("pause");
	return 0;
}

