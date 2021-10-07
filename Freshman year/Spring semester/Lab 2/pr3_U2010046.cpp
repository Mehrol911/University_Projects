/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 3.Write a class Account that represents your bank account. It contains information like name(string), account number(string) and balance(float) (all are private)
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class Account  // for bank account
{
private:
    string yourname;
    string youraccountNumber;
    float yourbalance;
public:
    Account(string yourname, string youraccountNumber, float yourbalance) // with 3 parameters // constructor
    {
        this->yourname = yourname;
        this->youraccountNumber = youraccountNumber;
        this->yourbalance = yourbalance;
        cout << "Welcome to bank account system " << yourname << endl;
    }
    ~Account() // destructor
    {
        cout << "This balance " << yourbalance << " is to big to be in a bank" << endl;
    }
    void display() 
    {
        cout << "Name: " << yourname << " Account number: " << youraccountNumber << " Balance: " << yourbalance << endl;
    }
};
//
int main3() // change here to int main()  
{
    system("Color 0A"); // my hint
    Account yourAccount("User", "U2010046", 411.01);
    yourAccount.display();
    system("pause");
    return 0;
}
