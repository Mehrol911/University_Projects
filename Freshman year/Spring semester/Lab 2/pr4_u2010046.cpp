/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 4.Write C++ header file  Triangle.h with class Triangle with data members and member functions as per following class diagram. 
In Triangle.h file only implement get and set methods.
***/
#include<iostream>
#include<windows.h>
#include<cmath>
// check if there is int main()
#include "pr4 Triangle.h";
using namespace std;
Triangle::Triangle(double height = 0, double base = 0) // default
{
    this->base = base;
    this->height = height;
    cout << "Triangle's HEIGHT = " << height << "  Triangle's BASE = " << base << endl;
}
Triangle::~Triangle() 
{
    cout << "Triangle object was destroyed" << endl;
}
// WE ARE FINDING RIGHT TRIANGLE
double Triangle::getArea() 
{
    return base * height / 2; // area formula for right triangle 
}
double Triangle::getPerimeter() 
{
   
    return height + base + sqrt(base*base+(height*height)); // right triangle perimetr
}

int main()
{
    system("Color 0A"); // my hint   
    double height, base;
    cout << "TRIANGLE variables" << endl; // user inpput
    cout << "\n ----------------------" << endl;
    cout << "Height: ";
    cin >> height;
    cout << "Base: ";
    cin >> base;

    Triangle userTriangle(height, base);
    cout << "------------------------------------" << endl;
    cout << "Area of triangle: " << userTriangle.getArea() << endl;
    cout << "Perimeter of triangle: " << userTriangle.getPerimeter() << endl;
    system("pause");
    return 0;
}
