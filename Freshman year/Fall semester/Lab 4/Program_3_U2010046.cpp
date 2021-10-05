/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: 3. Program to input a number and then calculate sum of its digits.   ***/

#include<iostream>     
using namespace std;
int main3()  // please change here to int main()
{
	
	    int b, sum = 0;   // b=Bazarov 
		cout << "Input the value of b: ";
		cin >> b;
		while (b > 0)   // The number you are entering is must be greater than 0
		{	                            // for example if you write 2010046 the sum will be 13 (this is my id)
			sum = sum + b % 10;
			b = b / 10;	
		}
		cout << "Sum is = " << sum << endl;
	
	system("pause");
	return 0;
}