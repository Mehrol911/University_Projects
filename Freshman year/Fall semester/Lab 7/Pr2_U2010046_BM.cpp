/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: 2. calculate circumference 4 figures using function overloading  ***/
		// LOOK int main()  there might be int main2()
#include<iostream>
#include<windows.h>
using namespace std;
float circumference(float r)  // Circumference of Circle
{
	return 2 * 3.14 * r;
}

float circumference(float p, float q) // Circumference of Rectangle
{
	return 2*(p + q);
}

double circumference(double a, double b, double c)  // Circumference of Triangle
{
	return a+b+c;
}

double circumference(double d) // Circumference of Square
{
	return 4*d;
}

int main2() // change here to int main
{
	system("Color A0");
	int m;//m is a first letter of my name
	cout << "HELLO! This is me MEKHROL BAZAROV FROM SECTION 003" << endl << endl;

	while (1)
	{
		cout << "Enter 1 to find Circumference of a Circle" << endl;
		cout << "Enter 2 to find Circumference of a Rectangle" << endl;
		cout << "Enter 3 to find Circumference of a Triangle" << endl;
		cout << "Enter 4 to find Circumference of a Square" << endl;
		cout << "Enter 0 to exit the program and Enter 0 to 4 = ";
		cin >> m;
		switch (m) // There are only 4 cases. You must write from 1 to 4. IF you want to exit the program press 0 and enter
		{ // WRITE ONLY INTEGER NUMBERS 1 to 4!!! // or 0 for exit.
		case 1:
			float r;
			cout << "Input the radius of cirle r = "; // Enter the value of radius here
			cin >> r; // it outputs the radius
			cout << "Circumference of Circle = " << circumference(r) << endl << endl;
			break;
		case 2:
			float p, q;
			cout << "Input the height of rectangle p = ";  // write the height
			cin >> p; // it outputs height
			cout << "Input the width of rectangle q = "; // write the width 
			cin >> q; // it outputs width
			cout << "Circumference of Rectangle = " << circumference(p, q) << endl << endl;
			break;
		case 3:
			double a, b, c, s; // a = side1, b = side2, c = side3
			cout << "Input the side1 of triangle a = ";  // input the side1
			cin >> a; // it outputs side1
			cout << "Input the side2 of triangle b = "; // input the side2 
			cin >> b; // it outputs side2
			cout << "Input the side3 of triangle c = ";  // input the side3
			cin >> c; // it outputs side3
			cout << "Circumference of Triangle = " << circumference(a, b, c) << endl << endl;
			break;
		case 4:
			double d;
			cout << "Input the side of square a = "; // write the side of square
			cin >> d; // it outputs the side of square
			cout << "Circumference of Square = " << circumference(d) << endl << endl;
			break;
		case 0: exit(0);
		default: cout << "Enter another number!!!!" << endl;
		}
	}

	system("pause");
	return 0;
}
