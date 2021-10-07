/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: Сreate two file
Week: 11
Lab: 10
***/
#include <iostream>
#include <fstream>
#include<windows.h>
// change there if there is int main1()
using namespace std;

int main()
{
    system("color 0A"); // my hint
    ofstream stream1("one.txt"); //creating output file stream class instance for one.txt
    for (int i = 1; i <= 10; i++)
    {
        stream1 << i * 2 << endl;
    }
    stream1.close(); //closing output file stream class instance of one.txt

    ofstream stream2("two.txt");
    for (int i = 1; i <= 10; i++)
    {
        stream2 << i * 5 << endl;
    }
    stream2.close();

    //variable that save two sums of one and two.txt
    int total = 0;
    string line;

    ifstream stream3("one.txt");
    while (getline(stream3, line))
    {
        total += stoi(line); // stoi function may not work in older versions
    }
    stream3.close();

    ifstream stream4("two.txt");
    while (getline(stream4, line))
    {
        total += stoi(line);
    }
    stream4.close();

    ofstream stream5("total.txt");
    stream5 << total;
    stream5.close();
    system("pause");
    return 0;
}
