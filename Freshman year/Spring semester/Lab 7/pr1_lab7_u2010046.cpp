/***
Name: MEKHROL BAZAROV
ID: U2010046
Program Statement: 1. create a publication class
Week: 8 
Lab: 7
***/
#include<iostream>
// click + to open it 
#include<windows.h>
using namespace std;
// check if there is int main()
class Publication 
{
private:
    string title;
    float price;
public:
    void setData() 
    {
        cout << "Title: ";
        cin >> title;
        cout << "Price: ";
        cin >> price;
    }
    void getData() 
    {
        cout << "Title: " << title << " Price: " << price << endl;
    }
};
//Book class
class Book : public Publication 
{
private:
    int pageCount;
public:
    void setData() 
    {
        cout << "Page Count: ";
        cin >> pageCount;
    }
    void getData() 
    {
        cout << "Page count: " << pageCount << endl;
    }
};
//Tape class
class Tape : public Publication 
{
private:
    float playingTime;
public:
    void setData() 
    {
        cout << "Playing time: ";
        cin >> playingTime;
    }
    void getData() 
    {
        cout << "Playing time: " << playingTime << endl;
    }
};

int main1() // change here
{
    system("color A0");
    Book ihyouulumiddin;
    cout << "Please write book details!" << endl;
    ihyouulumiddin.Publication::setData();
    ihyouulumiddin.setData();
    Tape ufq; // define tape class
    cout << "Please write Tape book details!" << endl;
    ufq.Publication::setData();
    ufq.setData();

    
    cout << "\nOur Book:\n"; // output result in console
    ihyouulumiddin.Publication::getData();
    ihyouulumiddin.getData();

    cout << "\nOur Tape:\n";
    ufq.Publication::getData();
    ufq.getData();

    system("pause");
    return 0;
}