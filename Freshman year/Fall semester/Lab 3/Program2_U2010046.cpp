/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Program to show swap of two numbers without using third variable   ***/

#include<iostream>     
using namespace std;
int main()
{
	int M, B;  //MEKHROL BAZAROV
	cout << "Enter the value of M = ";
	cin >> M;
	cout << "Enter the value of B = ";
	cin	>> B;
	M = M + B;
	B = M - B;
	M = M - B;
	cout << "M is = " << M << endl;  // For example: if you input 9 and 11 IN THIS Case 11 will be shown first 11 will be second   
	cout << "B is = " << B << endl;  // You can try it





	system("pause");
	return 0;
}