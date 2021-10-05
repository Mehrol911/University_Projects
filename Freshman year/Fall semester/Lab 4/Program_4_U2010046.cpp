/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  4. Program to find whether given number is a prime number or not. ***/

#include<iostream>     
using namespace std;
int main4()  // please change here to int main()
{
    int m, b, I;   // m=MEHROL b=BAZAROV I=INHA
  
    cout << "Input the value of m: "; 
    cin >> m;

    I = 0; b = 2;
        while (b<=m/2)                   // FIRST PROCCESS will divide number by two, three and up to the number you are entered for. 
    {
        if (m % b == 0)  
        { 
            I = 1;
            break;
        }
        b++;                       //Then if the number will not be divided by numbers then it is smaller than this number so it is a prime number
    }
    if (I == 0)
    {
        cout << m << " is a prime number" << endl;
    }
    else
    {
        cout << m << " is not a prime number" << endl;
    }

	system("pause");
	return 0;
}