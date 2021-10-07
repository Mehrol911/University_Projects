/***
Name: MEKHROL BAZAROV
ID: U2010046
Section: 003
Program Statement: 2. Create a class Distance.
***/
// week 7 Lab-6
#include<iostream>
#include<windows.h>
using namespace std;
// check if there is int main()
class Distance 
{
private:
    int kilometer, meter;
public:   
    Distance() {}; //default constructor   
    Distance(int kilometer, int meter) //parametric constructor
    {
        this->kilometer = kilometer + (meter / 1000);
        this->meter = meter % 1000;
    }
    void setKilometer(int kilometer) //set function
    {
        this->kilometer = kilometer;
    }
    void setMeter(int meter)
    {
        this->kilometer = this->kilometer + (meter / 1000);
        this->meter = meter % 1000;
    }   
    void showDistance()  //function show distance 
    {
        cout << "Kilometer: " << kilometer << " Meter: " << meter << endl;
    }
    void operator ==(Distance comparedDistance) //show differences
    {
        int distance1inMeters = kilometer * 1000 + meter;  // converting meters
        int distance2inMeters = comparedDistance.kilometer * 1000 + comparedDistance.meter;
        int differenceInMeters = abs(distance1inMeters - distance2inMeters); // found differences
        cout << "Difference: " << differenceInMeters / 1000 << " kilometers and " << differenceInMeters % 1000 << " meters";
    }
};

int main()  // change here if i wrote int main2()
{
    //initializing first distance object;
    system("Color 0A"); // my hint
    Distance distance1(20, 1046);  // my id U2010046
    distance1.showDistance();
    // second distance
    Distance distance2;
    distance2.setKilometer(19);
    distance2.setMeter(1209);
    distance2.showDistance();
    // difference of distances of object
    distance1 == distance2;
    system("pause");
    return 0;
}