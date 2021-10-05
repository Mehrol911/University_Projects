/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: 1. Program to calculate sum of numbers from m to n.  ***/

#include<iostream>     
using namespace std;
int main1()     // please change here to int main()
{ 
	int m, n, sum=0;
	cout << " Input the value of m: ";    
	cin >> m;
	cout << " Input the value of n: ";
	cin >> n;
	while (m <= n)
	{
		sum += m;
		++m;
	} 
	cout << "Sum is = " <<sum<< endl;  // SUM will be zero when m>n

	system("pause");
	return 0;
}