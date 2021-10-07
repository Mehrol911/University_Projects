/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2. Extend the above program to display area of circles. 
Week: 10
Lab: 9
***/
#include <iostream>
// change if there is int main2()
using namespace std;
class Shape
{
protected:
    int a, b; // length and width for rectangle, base and height for triangle, a for radius in circle
public:
    void getData(string shape)
    {
        cout << shape;
        if (shape == "rectangle")    
        {
            cout << "Write information about rectangle\n";
            cout << "Length: ";
            cin >> a;
            cout << "Width: ";
            cin >> b;
        }
        else if (shape == "triangle")
        {
            cout << "Write information about triangle\n";
            cout << "Base: ";
            cin >> a;
            cout << "Height: ";
            cin >> b;
        }
        else if (shape == "circle")
        {
            cout << "Write information about circle\n";
            cout << "Radius: ";
            cin >> a;
        }

    }
    virtual void displayArea() {};
};
//creating rectangle class in shape (derives)
class Rectangle : public Shape
{
public:
    Rectangle()
    {
        getData("rectangle");
    }
    void displayArea()
    {
        // length * width
        cout << "Rectangle's area: " << a * b << endl;
    }
};
//creating triangle class in shape (derives)
class Triangle : public Shape
{
public:
    Triangle()
    {
        getData("triangle");
    }
    void displayArea()
    {
        //base * height / 2
        cout << "Triangle's area: " << a * b / 2.0 << endl;
    }
};
//creating circle class in shape (derives)
class Circle : public Shape
{
public:
    Circle()
    {
        cout << 8;
        getData("circle");
        cout << 9;
    }
    void displayArea()
    {
        // pi * r^2
        cout << "Circle's area: " << 3.14 * a * a << endl;
    }
};

int main()
{
    system("color 0A"); // my hint
    string shape;
    Shape *myShape;

    cout << "Write R for rectangle, T for triangle, C for circle: ";
    cin >> shape;
    cout << shape;
    
    //choice validation
    if (shape == "R")
    {
        Rectangle rectangle;
        myShape = &rectangle;
    }
    else if (shape == "T")
    {
        Triangle triangle;
        myShape = &triangle;
    }
    else if (shape == "C")
    {
        Circle circle;
        myShape = &circle;
    }
    else
    {
        cout << "Wrong input";
        return 0;
    }

    //displaying area
    myShape->displayArea();

    system("pause");
    return 0;
}