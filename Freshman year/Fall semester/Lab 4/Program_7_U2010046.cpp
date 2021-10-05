/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement:  7. Program to use switch statement. Display Monday to Sunday. ***/

#include<iostream>     
using namespace std;
int main7()  // please change here to int main()
{
	int x;
	cout << "Input the value of x = ";  // Enter 1 to 7
	cin >> x;

	switch (x)
	{
	case 1: cout << "Monday"<< endl;
		break;
	case 2: cout << "Tuesday" << endl;
		break;
	case 3: cout << "Wednesday" << endl;
		break;
	case 4: cout << "Thursday" << endl;
		break;
	case 5: cout << "Friday" << endl;
		break;
	case 6: cout << "Saturday" << endl;
		break;
	case 7: cout << "Sunday" << endl;
		break;


	default: cout << "Wrong input. Enter 1 to 7" << endl;    
		break;
	}

    system("pause");
	return 0;
}


