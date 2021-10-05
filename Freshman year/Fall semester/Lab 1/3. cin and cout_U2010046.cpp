
/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: Use of cin and cout statements  ***/

#include<iostream>
using namespace std;
int main2()
{
	int num1, num2, num3; float var1; char Name;
	cout << "Input your first letter of your name = "; // Write capital letter 
	cin >> Name;
	cout << "First letter = " << Name << endl;         

	cout << "Write your Student ID = "; // Just write number do not start with "U" or some kind of letters!
	cin >> num1;
	cout << "ID: U" << num1 << endl;

	cout << "Input your OOP1 section number = "; // Just write 1, 2, 3 and so on. Not 001 or 002
	cin >> num2;
	cout << "Section: " << num2 << endl;

	cout << "Input credit from OOP1 lesson = "; // Just write 1, 2, 3 and so on. Not 2.0 or 3.0
	cin >> num3;
	cout << "Credit: " << num3 << endl;

	cout << "My first score from OOP1 = "; // You can also write 14.75 or 12.20 . It is up to you
	cin >> var1;
	cout << "Score: " << var1 << endl;

	system("pause");
	return 0;

	/*Thanks for checking lab assignment #1*/
}