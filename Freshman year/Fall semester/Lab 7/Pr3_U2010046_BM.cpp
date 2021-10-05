/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  WAP using function overloading:
1.	To find largest among three integers
2.	To find largest among three floating point numbers.

 ***/
 // LOOK int main()  there might be int main3()

#include <iostream>
using namespace std;
int maxNum(int a, int b, int c)
{
	return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}
float maxNum(float p, float q, float r)
{
	return (p > q) ? (p > r ? p : r) : (q > r ? q : r);
}
int main3()
{
	int m;//m is a first letter of my name
	cout << "HELLO! This is me MEKHROL BAZAROV FROM SECTION 003" << endl << endl;

	while (1)
	{
		cout << "Enter 1 to find largest among three integers" << endl;
		cout << "Enter 2 to find largest among three floating point numbers = ";
		cin >> m;
		switch (m) // There are only 2 cases. You must write 1 or 2. IF you want to exit the program press 0 and enter
		{ // WRITE ONLY INTEGER NUMBERS 1 to 4!!! // or 0 for exit.
		case 1:
			int a, b, c;
			cout << "Input values for a, b and c = "<<endl; // WRITE ONLY INTEGER NUMBERS!!! // IF you write floating point numbers the program WON'T WORK!!!
			cin >> a >> b >> c;
			cout << "The biggest number is = " << maxNum(a, b, c) << endl << endl;
			break;
		case 2:
			float p, q, r;
			cout << "Input values for p, q and r = "<<endl; // WRITE ONLY FLOATING POINT NUMBERS!!! // IF you write integer numbers anyway the program will work
			cin >> p >> q >> r;
			cout << "The biggest number is = " << maxNum(p, q, r) << endl << endl;
			break;
		case 0: exit(0);
		default: cout << "Enter another number!!!!" << endl;
		}
	}
	system("pause");
	return 0;
}
