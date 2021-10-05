/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-10. 		
3.	In a small company there are five salesmen. 
    Each salesman is supposed to sell three products. 
	Write a program using 2D array to print 
•	The total sales by each salesman and 
•	Total sales of each item.
 ***/

// MEKHROL BAZAROV
#include<iostream>
using namespace std;
int main3() // change here to int main() if there is int main3()
{
	//This is a just simple for output
	cout << "\t\t\t\tMEKHROL BAZAROV U2010046 003";
	cout << "\n\t\tSalesman 1" << "\tSalesman 2" << "\tSalesman 3" << "\tSalesman 4" << "\tSalesman 5";
	cout << "\nProduct 1" << "\tElement 01" << "\tElement 02" << "\tElement 03" << "\tElement 04" << "\tElement 05";
	cout << "\nProduct 2" << "\tElement 06" << "\tElement 07" << "\tElement 08" << "\tElement 09" << "\tElement 10";
	cout << "\nProduct 3" << "\tElement 11" << "\tElement 12" << "\tElement 13" << "\tElement 14" << "\tElement 15"<< endl;

	// input elements
	int matrix[3][5];
	cout << "\n\nLook the table above" << endl;
	cout << "Write quantity for Element 01 = ";
	cin >> matrix[0][0];
	cout << "Write quantity for Element 02 = ";
	cin >> matrix[0][1];
	cout << "Write quantity for Element 03 = ";
	cin >> matrix[0][2];
	cout << "Write quantity for Element 04 = ";
	cin >> matrix[0][3];
	cout << "Write quantity for Element 05 = ";
	cin >> matrix[0][4];
	cout << "Write quantity for Element 06 = ";
	cin >> matrix[1][0];
	cout << "Write quantity for Element 07 = ";
	cin >> matrix[1][1];
	cout << "Write quantity for Element 08 = ";
	cin >> matrix[1][2];
	cout << "Write quantity for Element 09 = ";
	cin >> matrix[1][3];
	cout << "Write quantity for Element 10 = ";
	cin >> matrix[1][4];
	cout << "Write quantity for Element 11 = ";
	cin >> matrix[2][0];
	cout << "Write quantity for Element 12 = ";
	cin >> matrix[2][1];
	cout << "Write quantity for Element 13 = ";
	cin >> matrix[2][2];
	cout << "Write quantity for Element 14 = ";
	cin >> matrix[2][3];
	cout << "Write quantity for Element 15 = ";
	cin >> matrix[2][4];

	// output elements
	cout << "\n\t\tSalesman 1" << "\tSalesman 2" << "\tSalesman 3" << "\tSalesman 4" << "\tSalesman 5";
	cout << "\nProduct 1" << "\tElement = "<< matrix[0][0] << "\tElement = "<< matrix[0][1] << "\tElement = "<< matrix[0][2] << "\tElement = "<< matrix[0][3] << "\tElement = "<< matrix[0][4];
	cout << "\nProduct 2" << "\tElement = "<< matrix[1][0] << "\tElement = "<< matrix[1][1] << "\tElement = "<< matrix[1][2] << "\tElement = "<< matrix[1][3] << "\tElement = "<< matrix[1][4];
	cout << "\nProduct 3" << "\tElement = "<< matrix[2][0] << "\tElement = "<< matrix[2][1] << "\tElement = "<< matrix[2][2] << "\tElement = "<< matrix[2][3] << "\tElement = "<< matrix[2][4]<< endl;

	// last part sum of each sales and each item
	cout << endl;
	int Product1, Product2, Product3;
	Product1 = matrix[0][0] + matrix[0][1] + matrix[0][2] + matrix[0][3] + matrix[0][4];
	Product2 = matrix[1][0] + matrix[1][1] + matrix[1][2] + matrix[1][3] + matrix[1][4];
	Product3 = matrix[2][0] + matrix[2][1] + matrix[2][2] + matrix[2][3] + matrix[2][4];
	cout << "Product 1 was sold = " << Product1 << " times" << endl;
	cout << "Product 2 was sold = " << Product2 << " times" << endl;
	cout << "Product 3 was sold = " << Product3 << " times" << endl;

	int Salesman1, Salesman2, Salesman3, Salesman4, Salesman5;
	Salesman1 = matrix[0][0] + matrix[1][0] + matrix[2][0];
	Salesman2 = matrix[0][1] + matrix[1][1] + matrix[2][1];
	Salesman3 = matrix[0][2] + matrix[1][2] + matrix[2][2];
	Salesman4 = matrix[0][3] + matrix[1][3] + matrix[2][3];
	Salesman5 = matrix[0][4] + matrix[1][4] + matrix[2][4];
	cout << "Salesman 1 sold = " << Salesman1 << " product" << endl;
	cout << "Salesman 2 sold = " << Salesman2 << " product" << endl;
	cout << "Salesman 3 sold = " << Salesman3 << " product" << endl;
	cout << "Salesman 4 sold = " << Salesman4 << " product" << endl;
	cout << "Salesman 5 sold = " << Salesman5 << " product" << endl;

	
	int sum1, sum2;
	sum1 = Product1 + Product2 + Product3;
	sum2 = Salesman1 + Salesman2 + Salesman3 + Salesman4 + Salesman5;
	cout << "\n\nLet's check program whether it is right or wrong" << endl;
	cout << sum1 << " = " << sum2 << endl;
	cout << "If you are seeing equality above is true then the program is right" << endl;
	system("pause");
	return 0;
}