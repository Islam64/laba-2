#include "car.h"
#include <string>
#include <iostream>
using namespace std;
 car::car()
    {
        cout<<"���������� ����������"<<endl;
        speed = 320;
        Color = "white";
        model = "X5";
       printf();
    }
 car::car(int speed,string color,string model)
    {
     cout<<"\n ����������� � ����������� "<<endl;
     this->speed = speed;
     this->Color = color;
     this->model = model;
     printf();

    }


void car:: printf()
{
       cout<<" ������: "<<model<<endl<<"������������ ��������: "<<speed<<endl<<"���� : "<<Color<<endl;
}

  car:: car(const car &car2)
    {
 cout<<"\n ����������� ����������� "<<endl;
    speed = car2.speed;
    Color = car2.Color;
    model = car2.model;
    printf();

        }
;
void car:: setspeed(int speed)
{
    this->speed = speed;
}
int car:: getspeed()
{
    return speed;
}
void car:: setmodel( string model)
{
    this->model = model;
}
string car:: getmodel()
{
    return model;
}
void car:: setColor(string color)
{
    this->Color = color;
}
string  car:: getColor()
{
    return Color;
}
car:: car& operator=(const car&  car2) {
        if (this == &car2) {
            return *this;
        }
        speed = car2.speed;
        return *this;
    }
bool car:: operator == (const car &car2)
{
    return  (this->speed == car2.speed);
}
bool car:: operator !=(const car &car2)
{
    return !(this->speed == car2.speed);
}
bool car:: operator >(const car &car2)
{
    return (this->speed > car2.speed);
}

bool car:: operator <(const car &car2)
{
    return (this->speed < car2.speed);
}
bool car:: operator <=(const car &car2)
{
    return (this->speed <=car2.speed);
}
bool car:: operator >=(const car &car2)
{
    return (this->speed >= car2.speed);
}
car:: car & operator ++()
{
    this->speed+=20;
    return *this;
}
car:: car & operator --()
{
    this->speed-=20;
    return *this;
}




