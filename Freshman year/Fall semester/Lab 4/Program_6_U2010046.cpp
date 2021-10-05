/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  6. Program to display series and find sum of 1+3+5+……..+n. ***/

#include<iostream>     
using namespace std;
int main()      // please change here to int main()
{
	int m=1, n, sum = 0;   // m is my first letter of my name
	cout << "1 + 3 + 5 + …… + n" << endl;  
	cout << "Input the value of n = "; // INPUT ONLY ODD NUMBER AS IN THE LECTURE 
	cin >> n;

	while (m <= n)
	{	
		sum += m;
		m = m + 2;
	}
	cout << "Sum = " << sum << endl;



	system("pause");
	return 0;
}