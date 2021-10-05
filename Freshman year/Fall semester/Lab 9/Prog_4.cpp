/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-9. 4. Write a program to insert an element to an array***/
		

// there was taught in the ppt file and lecture video 3 week 12
/*
#include<iostream> // Header File
using namespace std; // Pre processor
int main4() // change here to int main() if there is a number main4
{
	int n, position, number;
	int a[10];
	cout << "Input number of elements in an array:" << endl;
	cin >> n;
	cout << "Input array elements: Enter positive numbers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];  // inputted 
	}
	cout << "---------------------" << endl;
	cout << "Array elements are" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "a [" << i << "] = " << a[i] << endl;  // output
	}
	cout << endl;

	cout << "Enter number you want to insert = " << endl;
	cin >> number;
	cout << "Enter position you want to insert = " << endl; // you can also write 0 because it will start at 0 position
	cin >> position;

	for (int i = n; i >= position; i--)
	{
		a[i + 1] = a[i];                        //change position
	}
	a[position] = number;

	for (int i = 0; i < n + 1; i++)
	{
		cout << "a [" << i << "] = " << a[i] << endl;   // print
	}
	cout << endl;

	system("pause");
	return 0;
}*/