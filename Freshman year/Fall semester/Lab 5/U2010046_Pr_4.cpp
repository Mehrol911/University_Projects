/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  4.	Write a Program to print stars Sequence..  ***/

#include<iostream>     
using namespace std;
int main4()      // please change here to int main()
{
    // WE DO NOT HAVE TO TAKE INPUT IN THIS PROGRAM (we aren`t told to take it)
    char star = '*';
    for (int i = 1; i <= 5; i++)     // here you can also write i <= 9; then you have to change k = 9-i;
    {
        for (int k = 5 - i; k > 0; k--)
            cout << " ";
        for (int j = 1; j <= i; j++)
        {
            cout << star;
        }
        cout << endl;
    }


    system("pause");
    return 0;
}