/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2.Define a class Dollar
***/
// week 6 Lab-5
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class Dollar 
{
private:
    float currency, mktrate, offrate;
public:

    float getDollar() 
    {
        return this->currency;
    }
    float getMarketSoums() 
    {
        return this->currency * mktrate;
    }
    float getofficialSoums() 
    {
        return this->currency * offrate;
    }
    void setRates() 
    {
        cout << "Enter market rate:: "; cin >> mktrate;
        cout << "Enter official rate: "; cin >> offrate;
    }
    void operator <<(float currency) // here is overloading
    {
        this->currency = currency;
        cout << "Currency: " << this->getDollar() << endl;
        cout << "Market soums: " << this->getMarketSoums() << endl;
        cout << "Official soums: " << this->getofficialSoums() << endl;

    }
};
int main2() 
{
    system("Color 0A"); // my hint
    float currency;
    cout << "Enter currency: ";  // dollar
    cin >> currency;
    Dollar myDollar;
    myDollar.setRates(); //getting rates
    cout << endl;
    myDollar << currency;
    return 0;
}