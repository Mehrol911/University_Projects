/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-10. 
		2. Write a menu driven program to read and display an m × n matrix. 
		Also find the sum, transpose and product of two m × n matrices.  ***/
#include<iostream>
#include<windows.h>
using namespace std;
const int n = 15;
const int m = 15;
void Display_matrix() // user choice 1
{
	system("cls");  // it clears the information on the screen   (it clears main menu)
	int matrix[n][m], row, col;
	cout << "Input matrix's row = ";
	cin >> row;  
	cout << "Input matrix's col = ";
	cin >> col;
	cout << " Input Matrix elemnts " << endl; // write input elements row*col=elements
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "-------------------------------------------" << endl;
	cout << "Matrix elements are: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

}
void Sum_matrix() // user choice 2
{
	int a[m][n], b[m][n], row1, row2, col1, col2;
	// matrix a
	cout << " Input number of rows and for matrix a = ";
	cin >> row1;
	cout << " Input number of coloumns and for matrix a = ";
	cin >> col1;
	cout << " Input number elements for matrix a: " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cin >> a[i][j]; // input first matrix elements (a)
		}
	}
	cout << "-------------------------------------------" << endl;
	cout << " Matrix a = : " << endl;
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			cout << a[i][j] << "\t"; // output first matrix elements (a)
		}
		cout << endl;
	}


	// matrix b
	cout << " Input number of rows and for matrix b = ";
	cin >> row2;
	cout << " Input number of coloumns and for matrix b = ";
	cin >> col2;
	cout << " Input number elements for matrix b: " << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			cin >> b[i][j]; // input second matrix elements (b)
		}
	}
	cout << "-------------------------------------------" << endl;
	cout << " Matrix b = : " << endl;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			cout << b[i][j] << "\t"; // output second matrix elements (b)

		}
		cout << endl;
	}

	//matrix c
	int c[m][n];
	cout << "-------------------------------------------" << endl;

	cout << "Sum of matrix a and b is" << endl;
	if (row1 == row2 && col1 == col2)  // 1 st matrix's and 2 nd matrix's row and coloum must be equal
	{
		{
			for (int i = 0; i < row1; i++)
			{
				for (int j = 0; j < col1; j++)
				{
					c[i][j] = a[i][j] + b[i][j]; // adding two matrixes
				}
			}
		}
		for (int i = 0; i < row2; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				cout << c[i][j] << "\t";  // output of the result
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Sum of matrix is not possible:" << endl; // if rows and coloumns is not equeal to each other so it will print this
	}

}
void Transpose_matrix() // user choice 3
{
	// transpose
	system("cls");  // it clears the information on the screen   (it clears main menu)
	// inputting matrix row and coloumn
	int row, col;
	int matrix1[n][m], matrix2[n][m];
	cout << "Input matrix's row = ";
	cin >> row;
	cout << "Input matrix's col = ";
	cin >> col;
	cout << " Input Matrix elemnts " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "-------------------------------------------" << endl;
	cout << "Matrix elements are: " << endl; // it shows output of matrix 1
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix1[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "-------------------------------------------" << endl;
	cout << "Transposed of matrix is " << endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			matrix2[i][j] = matrix1[j][i];  // formula for transposing 2 matrixes
		}

	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << matrix2[i][j] << "\t";
		}
		cout << endl;
	}

}
void Product_matrix() // user choice 4
{
	system("cls");  // it clears the information on the screen   (it clears main menu)
	// inputting matrix rows and coloumns
	int i, j, k;
	int rows1, cols1, rows2, cols2, res_rows, res_cols;  // res means result
	int matrix1[n][m], matrix2[n][m], matrix3[n][m];
	cout << "Input first matrix's row = ";
	cin >> rows1;
	cout << "Input first matrix's col = ";
	cin >> cols1;
	cout << "Input second matrix's row = ";
	cin >> rows2;
	cout << "Input second matrix's col = ";
	cin >> cols2;

	// checking Rows coloums equivavelnt
	if (cols1 != rows2 && cols2 != rows1)
	{
		cout << "Number of coloumn in one matrix must be equal to number of rows in other:" << endl;
		exit(1);

	}
	else if (cols1 == rows2)
	{
		res_rows = rows1;
		res_cols = cols2;
	}
	else if (cols2 == rows1)
	{
		res_rows = rows2;
		res_cols = cols1;
	}

	// 1st and 2nd matrix elements input
	cout << " Enter first matrix elements: " << endl;
	cout << "----------------------------------------------" << endl;
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << " Enter second matrix elements: " << endl;
	cout << "----------------------------------------------" << endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			cin >> matrix2[i][j];
		}
	}

	//here is the logic multiplication process
	for (int i = 0; i < res_rows; i++)
	{
		for (int j = 0; j < res_cols; j++)
		{
			matrix3[i][j] = 0;
			for (int k = 0; k < rows2; k++)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	// output of the multiplication 
	cout << "Elements in the product matrix are: " << endl;
	for (int i = 0; i < res_rows; i++)
	{
		cout << endl;
		for (int j = 0; j < res_cols; j++)
		{
			cout << matrix3[i][j] << "\t";
		}
	}
}
int main2() // change here to int main() if there is int main2()
{
	int m;//m is a first letter of my name
	for (;;) // There are only 4 cases. You must write from 1 to 4.  IF you want to exit the program press 0 and enter
	{  // WRITE ONLY INTEGER NUMBERS 1 to 4!!! // or 0 for exit.
		cout << "\n\n\t\t\t   Name: MEKHROL BAZAROV ID: U2010046 Section: 003";
		cout << "\n\n\t\t\t\t Welcome to Matrix calculation system";  // \n means down to (vertical), \t means right to (horizontal)
		cout << "\n\n\t\t\t\t\t      MAIN MENU";
		cout << "\n\t\t\t\t ------------------------------------";
		cout << "\n\t\t\t\t [1] Display matrix [just for displaying]";
		cout << "\n\t\t\t\t [2] Find Sum of matrix";
		cout << "\n\t\t\t\t [3] Find Transpose of matrix";
		cout << "\n\t\t\t\t [4] Product of two matrix";
		cout << "\n\t\t\t\t [0] Exit";
		cout << "\n\t\t\t\t Enter your choice: ";
		cin >> m;
		switch (m)
		{
		case 1:
			Display_matrix();
			break;
		case 2:
			Sum_matrix();
			break;
		case 3:
			Transpose_matrix();
		    break;
		case 4:
			Product_matrix();
			break;
		case 0: exit(0);
		default: cout << "Enter another number!!!!" << endl;
		}
	}
	system("pause");
	return 0;
}