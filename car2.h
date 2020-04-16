#ifndef CAR2_H_INCLUDED
#define CAR2_H_INCLUDED
using namespace std;
class car
{
private:
int speed;
   string  Color;
   string  model;
   friend ostream& operator<<(ostream& ios,const car& car2);
   friend istream& operator>>(istream& is, car& car2);
public:
car();
  car(int speed,string color,string model);
  void  printf();
  car(const car &car2);
  void setspeed(int speed);
  int  getspeed() const;
  void  setmodel( string model);
  string  getmodel() const;
  void  setColor(string color);
  string   getColor() const;
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


#endif // CAR2_H_INCLUDED
