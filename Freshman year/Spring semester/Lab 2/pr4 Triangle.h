#include<iostream>
using namespace std;
class Triangle {
private:
    double height;
    double base;
public:
    Triangle(double, double);
    ~Triangle();
    double getArea();
    double getPerimeter();
    void setHeight(double height) 
    {
        this->height = height;
    }
    double getHeight()  // when we use get we must return
    {
        return height;
    }
    void setBase(double base) 
    {
        this->base = base;
    }
    double getBase() // when we use get we must return
    {
        return base;
    }
};