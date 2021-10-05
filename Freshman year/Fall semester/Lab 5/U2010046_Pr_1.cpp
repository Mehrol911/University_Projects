/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  1. Write a program to calculate pow(x,n) i.e. to calculate x^n ***/

#include<iostream>     
using namespace std;
int main1()      // please change here to int main()
{
    int x, n;
    float result = 1;

    cout << "Enter x = ";
    cin >> x;
    cout << "Enter n = ";
    cin >> n;

    cout << x << "^" << n << " = ";

    while (n != 0)  // when you enter n = 0 so the answer will be 1, here is written that when n is not equal to n !!!
    {
        result *= x;
        --n;
    }

    cout << result << endl;



	system("pause");
	return 0;
}