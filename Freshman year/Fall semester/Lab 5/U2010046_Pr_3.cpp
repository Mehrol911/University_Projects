/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  3.	Write a Program to print stars Sequence.  ***/

#include<iostream>     
using namespace std;
int main3()      // please change here to int main()
 
{   // WE DO NOT HAVE TO TAKE INPUT IN THIS PROGRAM (we aren`t told to take it)
	char star = '*';
	
	for (int i = 1; i <= 5; i++)    // i is row

	{
		for (int j = 1; j <= i; j++)   // j is coloumn             
		{
			cout << star;   // iT is the same program as you showed in your video. there was 1 instead of star
		}
		cout << endl;

	}


	system("pause");
	return 0;
}