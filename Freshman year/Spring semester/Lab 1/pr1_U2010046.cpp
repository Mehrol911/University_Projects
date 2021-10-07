/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. Define a class student with the following specification
***/


#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Student
{
private:
	string Student_ID, Student_Name;
	double OOP2_Score, Maths_Score;
	double English_Score, Total_Score;
public:
	void Takedata() 
	{
		cout << "\n Write student's ID: ";
		cin >> Student_ID;
		cout << "\n Write student's name: ";
		cin >> Student_Name;
		cout << "\n Write his/her OOP2 score: ";
		cin >> OOP2_Score;
		cout << "\n Write his/her English score: ";
		cin >> English_Score;
		cout << "\n Write his/her Maths score ";
		cin >> Maths_Score;
	}
private:
	double ctotal() 
	{
		return OOP2_Score+English_Score+Maths_Score;
	}
public:
	void Showdata() 
	{
		cout << "\t\t\t\t\Student" << endl;
		cout << "\t\t\t\t\ID is: " << Student_ID << endl;
		cout << "\t\t\t\t\Name is: " << Student_Name << endl;
		cout << "\t\t\t\t\OOP2 score: " << OOP2_Score << endl;
		cout << "\t\t\t\t\English score: " << English_Score << endl;
		cout << "\t\t\t\t\Math score: " << Maths_Score << endl;
		cout << "\t\t\t\t\Student's total score: " << ctotal() << endl;
	}
};
int main() // change here to int main() if needed
{
	system("Color 0A");
	Student s1;
	s1.Takedata();
	s1.Showdata();
	system("pause");
	return 0;
}
