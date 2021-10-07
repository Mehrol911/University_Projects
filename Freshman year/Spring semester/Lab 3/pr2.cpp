/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 2. Create two classes A and B.
***/
#include<iostream>
#include<windows.h>
// check if there is int main()
using namespace std;
class A;
class B;
class A // class A
{
private:
    int int1classA;
public:
    A(int int_number) //constructor
    {
        this->int1classA = int_number;
    }
    void printint_number() 
    {
        cout << "int1classA = " << this->int1classA << " ";
    }
    friend void swapVariables(A& a, B& b); // defining friend function which swaps variables
};

class B // class B
{
private:
    int int2classB;
public:
    B(int int_number) //constructor 
    {
        this->int2classB = int_number;
    }
    void printint_number() 
    {
        cout << "int2classB = " << this->int2classB << " ";
    }
    friend void swapVariables(A& a, B& b);// defining friend function which swaps variables
};


void swapVariables(A& a, B& b) // swapping
{
    int example_integer = a.int1classA;
    a.int1classA = b.int2classB;
    b.int2classB = example_integer;
}

int main2() // change here to int main() 
{
    system("Color 0A"); // my hint
        A a(100);
        B b(46); // my last id

        cout << "Variables before swapped" << endl; // numbers before swapped
        a.printint_number();
        b.printint_number();
        swapVariables(a, b); // goes to part void swapVariables
        
        cout <<endl;
        cout << "Variables after swapped:" << endl; // numbers after swapped
        a.printint_number();
        b.printint_number();
    system("pause");
    return 0;
}
