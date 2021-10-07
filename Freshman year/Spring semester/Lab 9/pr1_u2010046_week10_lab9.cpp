/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1.Create a base class called shape
Week: 10
Lab: 9
***/

#include <iostream>
// change if there is int main1()
using namespace std;
class Shape
{
protected:
    int a, b; // length and width for rectangle, base and height for triangle
public:
    void getData(string shape)
    {
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

int main1()
{
    system("color 0A"); // my hint
    string shape;
    Shape *myShape;

    cout << "Write R for rectangle, T for triangle): ";
    cin >> shape;

    if (shape == "R") // validation - choice
    {
        Rectangle rectangle;
        myShape = &rectangle;
    }
    else if (shape == "T") 
    {
        Triangle triangle;
        myShape = &triangle;
    }
    else {
        cout << "Wrong input";
        return 0;
    }

    //displaying area
    myShape->displayArea();

    system("pause");
    return 0;
}
