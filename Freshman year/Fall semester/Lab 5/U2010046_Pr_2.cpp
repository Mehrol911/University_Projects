/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  2. Write a program to print the reverse of a number ***/

#include<iostream>     
using namespace std;
int main2()      // please change here to int main()
{

	int m, reverse = 0, remainder;           // m is just my first letter of name
	cout << "Enter a number m: ";                 // you can also input negative number
	cin >> m;
	while (m != 0) // when it is equal to 0, the answer also be zero
	{
		remainder = m % 10;
		reverse = reverse * 10 + remainder;   // in this part we can also write like that {reverse=reverse*10+m%10  so then we do not need to write remainder}
		m = m/10;
	}
	cout << "Reversed Number of m: " << reverse << endl;


	system("pause");
	return 0;
}