/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 3. Write C++ program to create class Student with following details and 
write menu driven program to set student details, get 
student details and display score details of student.
***/
#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
class Student 
{
private:
	string ID, name;
	double score_oop2, score_maths, score_english;
public:
	void setStudent_ID(string m) 
	{
		ID = m;
	}
	string getStudent_ID() 
	{
		return ID;
	}
	void setStudent_name(string m) 
	{
		name = m;
	}
	string getStudent_name() 
	{
		return name;
	}
	void setStudent_sc_oop2 (double m) 
	{
		score_oop2 =m;
	}
	double getStudent_sc_oop2() 
	{
		return score_oop2;
	}
	void setStudent_sc_maths(double m) 
	{
		score_maths = m;
	}
	double getStudent_sc_maths() 
	{
		return score_maths;
	}
	void setStudent_sc_english (double m) 
	{
		score_english = m;
	}
	double getStudent_sc_english() 
	{
		return score_english;
	}
};
int main() // change here to int main() if needed
{
	system("Color 0A");
	Student s1;
	string ID, name;
	double sc_oop2, sc_maths, sc_english;
	while (1) 
	{
		cout << "\t\t\t\t\t\n 1. SET STUDENT DETAILS: ";
		cout << "\t\t\t\t\t\n 2. GET STUDENT DETAILS: ";
		cout << "\t\t\t\t\t\n 3. DISPLAY SCORE DETAILS:";
		cout << "\t\t\t\t\t\n 0. Exit programm: ";

		int ch; cin >> ch;
		switch (ch) 
		{
		case 0:
			break;
		case 1:
			cout << "\n SET STUDENT DETAILS: ";
			cout << "\n ID: ";            cin >> ID; s1.setStudent_ID(ID);
			cout << "\n NAME: ";          cin >> name; s1.setStudent_name(name);
			cout << "\n OOP2 Score: ";    cin >> sc_oop2; s1.setStudent_sc_oop2 (sc_oop2);
			cout << "\n Maths Score: ";   cin >> sc_maths; s1.setStudent_sc_maths (sc_maths);
			cout << "\n English Score: "; cin >> sc_english; s1.setStudent_sc_english(sc_english);
			break;
		case 2:
			cout << "\n STUDENT ID: "   << s1.getStudent_ID();
			cout << "\n STUDENT NAME: " << s1.getStudent_name();
			break;
		case 3:
			cout << "\n OOP2 SCORE:"      << s1.getStudent_sc_oop2();
			cout << "\n MATHS SCORE:"     << s1.getStudent_sc_maths();
			cout << "\n ENGLISH SCORE:"   << s1.getStudent_sc_english();
			cout << "\n TOTAL SCORE:"                <<  s1.getStudent_sc_oop2() + s1.getStudent_sc_maths() + s1.getStudent_sc_english();
			cout << "\n Average score of 3 subjects" << (s1.getStudent_sc_oop2() + s1.getStudent_sc_maths() + s1.getStudent_sc_english()) / 3 << endl;
		}

	}
	return 0;
	system("pause");
}