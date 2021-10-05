/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: 5. Program to display sum of series 1+1/2+1/3+……….+1/n.   ***/

#include<iostream>     
using namespace std;
int main5()//please change here to int main()
{
	double b=1, n,sum = 0.0; // b is my first letter of my surname
	cout << "1+1/2+1/3+………+1/n" << endl;
	cout << "Input the value of n = "; // Input positive integer number  
	cin >> n;
	
	while (b<=n)
	{
		sum = sum + 1 / b;
		b=b+1;
	}
	cout << "Sum = " << sum << endl;

	    

	system("pause");
	return 0;
}