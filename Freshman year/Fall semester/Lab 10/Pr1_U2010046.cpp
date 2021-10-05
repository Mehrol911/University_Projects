/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-10. 1. Write a program to generate Pascal’s triangle. ***/
#include<iostream>
using namespace std;
void triangle(int num)
     {
        int arr[99][99]; //maximum rows and coloumns
        while (num <= 0)
        {
            cout << "Wrong input"<<endl;
            break;
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == j || j == 0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    int main() // change here to int main() if there is int main1()
    {   int num;
        cout << "Input the number of rows: ";
        cin >> num;
        triangle(num);
	system("pause");
	return 0;
    }