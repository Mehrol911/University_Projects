/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: file contains... telephone numbers
Week: 11
Lab: 10
***/
#include <iostream>
#include <fstream>
#include<windows.h>
// change there if there is int main2()
using namespace std;

int main2()
{
    system("color 0A"); // my hint  
    ifstream stream1("telephone_numbers.txt"); //creating instance of input file stream class for telephone_numbers.txt
    string line = "";

    //outputing file context
    while (getline(stream1, line))
    {
        cout << line << endl;
    }
    stream1.close();
    system("pause");
    return 0;
}
