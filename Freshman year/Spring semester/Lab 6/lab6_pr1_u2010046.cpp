/***
Name: MEKHROL BAZAROV
ID: U2010046
Section: 003
Program Statement: 1. Create a class Rectangle.
***/
// week 7 Lab-6
#include<iostream>
#include<windows.h>
using namespace std;
// check if there is int main()
class Rectangle
{
private:
    double Length, Breadth;
public:
    Rectangle(){};
    //default constructor    
    Rectangle(double Length, double Breadth) //parametric constructor
    {
        this->Length = Length;
        this->Breadth = Breadth;
    }
    double getArea() // get function
    {
        return this->Length * this->Breadth;
    }
    void setLength(double Length)  //set function
    {
        this->Length = Length;
    }
    void setBreadth(double Breadth) //set function 
    {
        this->Breadth = Breadth;
    }
    Rectangle operator +(Rectangle addedRectangle) //overloading operator
    {
        return Rectangle(this->Length + addedRectangle.Length, this->Breadth + addedRectangle.Breadth);
    }

};

int main() // change here if i wrote int main2()
{
    system("Color 0A"); // my hint
    // rectangle 1
    Rectangle rect1(9, 11); // initialize
    cout << " Rectangle 1's Area = " << rect1.getArea() << endl;
    // rectangle 2
    Rectangle rect2;
    rect2.setBreadth(21);
    rect2.setLength(31);
    cout << " Rectangle 1's Area = " << rect2.getArea() << endl;
    //rectangle 3
    Rectangle rect3 = rect1 + rect2;
    cout << " Rectangle 3's Area(1+2) =  " << rect3.getArea() << endl;
    system("pause");
    return 0;
}