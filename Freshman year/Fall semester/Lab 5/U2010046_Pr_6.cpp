/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  6. Program to print Sequence.  ***/

#include<iostream>     
using namespace std;
int main6()      // please change here to int main()
{
	char star = '*';    
	int n;

	cout << "Enter the value of n = ";
	cin >> n;

	for (int i = 1; i <= n; i++)    // i is row

	{
		for (int j = 1; j <= i; j++)   // j is coloumn            
		{
			cout << star;  
		}
		cout << endl;

	}

	for (int i = n; i >= 0; i--)  // you showed how to do that
	{
		for (int j = 1; j <= i; j++)
		{
			cout << star;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}