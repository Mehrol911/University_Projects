/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. create class BOX
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class Box // defining class
{
private:
    int width;
public:
    
   void setWitdh(double m) // defining function to set width 
    {
       this->width = m;
    }
   friend void printWidth(Box box); // defining friend function
};
void printWidth(Box box) // printing value width box object
{
    cout << "Box = " << box.width << endl;
}
int main1() // change here to int main() 
{
    system("Color 0A"); // my hint
    Box mybox;
    mybox.setWitdh(15);
    printWidth(mybox);
    system("pause");
    return 0;
}
