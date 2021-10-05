/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  7. Write a program to add first seven terms of the following series using for loop: 1/!1+ 2/!2 + 3/!3 + …………7/!7
  ***/

#include<iostream>     
using namespace std;
int main7()      // please change here to int main()
{
    double sum = 0;
    for (int i = 1; i <= 7; i++) // you can write any numbers i<=11 and so on
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j; // the denominator of the fraction

        }
        sum +=i*1.0/ factorial;  // it is the main formula of the program needed

    }
    cout <<"1/!1+2/!2+3/!3+...+7/!7 = "<< sum << endl;


	system("pause");
	return 0;
}