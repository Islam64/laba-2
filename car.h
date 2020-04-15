#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class car
{
private:
int speed;
   string  Color;
   string  model;
public:
    car();
    car(int speed,string color,string model);
    void  printf();
    car(const car &car2);
    void setspeed(int speed);
    int  getspeed();
    void  setmodel( string model);
    string  getmodel();
    void  setColor(string color);
    string   getColor();
    car& operator=(const car&  car2);
    bool operator == (const car &car2);
    bool operator !=(const car &car2);
    bool operator >(const car &car2);
    bool operator <(const car &car2);
    bool operator <=(const car &car2);
    bool operator >=(const car &car2);
    car & operator ++();
    car & operator --();
};


#endif // CAR_H_INCLUDED
