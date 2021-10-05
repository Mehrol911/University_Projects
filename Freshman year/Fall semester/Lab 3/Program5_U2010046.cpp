/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Program to find whether given number is even or odd  ***/

#include<iostream>     
using namespace std;
int main5()
{
	int M;  // First letter of my name    
	cout << "Enter the value of M = ";          // Write integer number
	cin >> M;
	if (M % 2 == 0)
	{
		cout << M << " is even number" << endl;
	}
	else
	{
        cout << M << " is odd number"  << endl;
	}


	system("pause");
	return 0;
}