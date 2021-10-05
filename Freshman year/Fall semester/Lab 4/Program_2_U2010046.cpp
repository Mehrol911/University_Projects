/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  2. Program to print Fibonacci series up to 100. ***/

#include<iostream>     
using namespace std;
int main2()  // please change here to int main()
{
    int num1 = 0, num2 = 1, num3 = 1;

    cout << "The Fibonacci Series up to 100 : " << endl << num1 << " " << num2 << " ";
    while (num1 + num2 < 100) // You can also write other numbers for example 1000
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;   // continuous adding numbers and it will stop at 89 it means it is smaller than 100. 
        cout << num3 << " "; // Do not write something in them for examle if you write 4 then it will show 4 after the third number then fibanacci continuos but after each number there will be number you entered there
    }
    


	system("pause");
	return 0;
}