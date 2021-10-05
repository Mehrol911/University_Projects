/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Program to find that entered year is leap year or not  ***/

#include<iostream>     
using namespace std;
int main4()
{  
    int Year;
    cout << "Write a year: ";         // IT MUST BE POSITIVE NUMBER. 
    cin >> Year;                      //MEKHROL BAZAROV

    if (Year % 4 == 0)
    {                                // IT WAS TRICKY ONE. The problem was {} in this elements. Sometimes I forget and where to put them.
        if (Year % 100 == 0)
        {
            if (Year % 400 == 0)
            {
                cout << Year << " is a leap year." << endl;
            }
            else
            {
                cout << Year << " is not a leap year." << endl;
            }
        }
        else
        {
            cout << Year << " is a leap year."<<endl;
        }
    }
    else
        cout << Year << " is not a leap year."<<endl;

	system("pause");
	return 0;
}