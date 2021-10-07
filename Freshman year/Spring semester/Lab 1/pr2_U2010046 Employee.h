/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement:  2. Write C++ header file  Employee.h with class Employee
with following details. Write C++ menu driven  program to set employee details, get
employee details and display monthly salary details of employee.
***/

#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
class Employee 
{
private:
	string ID, name;
	int no_of_hours, rate_per_hour;
public:
	void setEmployee_ID(string a) {
		ID = a;
	}
	string getEmployee_ID() {
		return ID;
	}
	void setEmployee_name(string b) {
		name = b;
	}
	string getEmployee_name() {
		return name;
	}
	void setEmployee_No_of_hours_work(int c) {
		no_of_hours = c;
	}
	int getEmployee_No_of_hours_work() {
		return no_of_hours;
	}
	void setrate_per_hour(int d) {
		rate_per_hour = d;
	}
	int get_rate_per_hour() {
		return rate_per_hour;
	}
	double getTotal_Monthly_Salary() 
	{
		return rate_per_hour * no_of_hours;
	}
};
int main() // change here to int main() if needed
{
	system("Color 0A");
	Employee E1;
	string ID, name;
	int no_of_hours, rate_per_hour;
	double total;
	while (1) 
	{
		cout << "\t\t\t\t\t\n 1  Set details of Employee";
		cout << "\t\t\t\t\t\n 2. Get details of Employee";
		cout << "\t\t\t\t\t\n 3. Display monnthly salary of Employee: ";
		cout << "\t\t\t\t\t\n 0. Exit programm";
		int ch; cin >> ch;
		switch (ch) 
		{
		case 1:
			cout << "\t\t\t\t\t\n SET FOLLOWING DETAILS OF EMPLOYEE: ";
			cout << "\t\t\t\t\t\n ID: "; 
			cin >> ID; E1.setEmployee_ID(ID);
			cout << "\t\t\t\t\t\n Name: "; 
			cin >> name; E1.setEmployee_name(name);
			cout << "\t\t\t\t\t\n Number of hours of work"; 
			cin >> no_of_hours; E1.setEmployee_No_of_hours_work(no_of_hours);
			cout << "\t\t\t\t\t\n Rate per hour of work"; 
			cin >> rate_per_hour; E1.setrate_per_hour(rate_per_hour);
			break;
		case 2:
			cout << "\t\t\t\t\t\n Details of the following employee";
			cout << "\t\t\t\t\t\n ID: "                      << E1.getEmployee_ID();
			cout << "\t\t\t\t\t\n Name: "                    << E1.getEmployee_name();
			cout << "\t\t\t\t\t\n Number of hours of work: " << E1.getEmployee_No_of_hours_work();
			cout << "\t\t\t\t\t\n Rate per hour: "           << E1.get_rate_per_hour();
			break;
		case 3:
			cout << "\t\t\t\t\t\n Total monthly salary:"     << E1.getTotal_Monthly_Salary();
			break;
		case 0:
			break;
		}
	}
	return 0;
}
