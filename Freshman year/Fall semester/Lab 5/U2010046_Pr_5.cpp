/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  5. Program to print star Sequences.  ***/

#include<iostream>     
using namespace std;
int main5()      // please change here to int main()
{


	char star = '*';
	int n;
	cout << "Enter the value of n = ";
	cin >> n;

	for (int i = 1; i <= n; i+=2)    // i is row   it is the same problem like 3 rd one. but in this program i changed only here i+=2 you can also write i+=any number

	{
		for (int j = 1; j <= i; j++)   // j is coloumn             
		{
			cout << star;   
		}
		cout << endl;

	}


	system("pause");
	return 0;
}