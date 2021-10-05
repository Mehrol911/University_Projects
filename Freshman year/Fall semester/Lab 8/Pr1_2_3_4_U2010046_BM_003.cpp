/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-8. There are 4 programs. You can see it when you run the program ***/
		
#include<iostream>
#include<windows.h>
using namespace std;
int pow(int x, int y)  //program 1  
{
	if (y == 0)
		return 1;
	else
		return (x * pow(x, y - 1));
} 
int num_add(int n)  //program 2  
{
	if (n == 0)
		return 0;
	else
		return (n + num_add(n - 1));
}
int fibonacci(int f) //program 3
{
	if (f <= 1)
		return f;
	else
		return (fibonacci(f - 1) + fibonacci(f - 2));
}
int GCD(int j, int k) //program 4
{
	if (k == 0)
		return j;
	else
		return GCD(k, j % k);
}
int main()
{
	system("Color F1");
	int m;//m is a first letter of my name
	cout << "HELLO! This is me MEKHROL BAZAROV FROM SECTION 003" << endl;

	while (1) // There are only 4 cases. You must write from 1 to 4.  IF you want to exit the program press 0 and enter
	{  // WRITE ONLY INTEGER NUMBERS 1 to 4!!! // or 0 for exit.
		cout << endl; 
		cout << "Enter 1 to calculate the x^y using tail recursion" << endl;
		cout << "Enter 2 to find sum of natural numbers using recursion (1+2+3...+n)" << endl;
		cout << "Enter 3 to display fibonacci series using recursion" << endl;
		cout << "Enter 4 to find G.C.D for two integers using recursion" << endl;
		cout << "Enter 0 to exit the program and Enter 0 to 4 = ";
		cin >> m;
		switch (m)
		{
		case 1:
			int x, y;
			cout << "Input x = ";  // write integer number!
			cin >> x;
			cout << "Input y = "; // write integer number!
			cin >> y;
			cout << x << " to the power " << y << " = " << pow(x, y) << endl; // when the program sees pow() it goes to line 8 (program 1)
			break;
		case 2:
			int n;
			cout << "Input n = "; // write integer number!
			cin >> n;
			cout << "Sum of numbers equal to = " << num_add(n) << endl; // when the program sees num_add() it goes to line 15 (program 2)
			break;
		case 3:
		{   int f, i = 0;
		cout << "Input f = ";  // write integer number!
		cin >> f;
		cout << "Fibonacci series: ";
		while (i < f)
		{
			cout << " " << fibonacci(i); // when the program sees fibonacci() it goes to line 22 (program 3)
			i++;
		}
		break;
		}
		case 4: 
			int j, k;
			cout << "Input j = ";  // write integer number!
			cin >> j;
			cout << "Input k = "; // write integer number!
			cin >> k;
			cout << " GCD of " << j << " and " << k <<" equal to = "<< GCD(j, k) << endl; // when the program sees GCD() it goes to line 29 (program 4)
			break;
		case 0: exit(0);
		default: cout << "Enter another number!!!!" << endl; 
		}
	}

	system("pause");
	return 0;
}
