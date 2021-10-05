/***    Full name: MEKHROL BAZAROV
		Student ID: U2010046
		Program statement: LAB-9. 3. Write a program to merge to sorted arrays ***/

// THIS TASK IS MORE UNDERSTANDABLE because in the lecture notes everyting is taught
// there were some problems in the video
// I improved the code. Everything works fine

// there was a hint in the video.
/* e.g. a. a1[10]={25,27,32,98}
        b. a2[10]=[12,23,28,51,72,85,97]  
		c. then a3[20] should be equal to [12,23,25,27,28,32,51,72,85,97,98]
*/
/*
#include<iostream> // Header File
using namespace std; // Pre processor
int main3() // change here to int main() if there is a number main3
{
	int i, n1, n2, m, index = 0;
	int a1[10], a2[10], a3[20];
	int index_first = 0, index_second = 0;
	//array 1
	cout << "Input number of elements in an array:" << endl; 
	cin >> n1; 
	cout << "Input array elements: Enter positive numbers: " << endl;
	for (int i = 0; i < n1; i++)
	{
		cin >> a1[i];  // inputted 
	}

	for (int i = 0; i < n1; i++)
	{
		cout << "a1 [" << i << "] = " << a1[i] << endl;  // output
	}
	cout << endl;
	// array 2

	cout << "Input number of elements in an array:" << endl;
	cin >> n2;
	cout << "Input array elements: Enter positive numbers: " << endl;
	for (int i = 0; i < n2; i++)
	{
		cin >> a2[i];  // inputted
	}

	for (int i = 0; i < n2; i++)
	{
		cout << "a2 [" << i << "] = " << a2[i] << endl;  // output
	}
	cout << endl;


	// array 3 
	m = n1 + n2; // number of elements in array 1 + number of elements in array 2 = number of elements array 3
	while (index_first < n1 && index_second < n2)
	{
		if (a1[index_first] < a2[index_second])
		{
			a3[index++] = a1[index_first++];
		}
		else
		{
			a3[index++] = a2[index_second++];
		}
	}


	while (index_first < n1)
	{
		a3[index++] = a1[index_first++];	
	}
	while (index_second < n2)
	{
		a3[index++] = a2[index_second++];
	}

	cout << "The merged array is:" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "a3 [" << i << "] = " << a3[i] << endl;  // output
	}


	system("pause");
	return 0;
}*/

