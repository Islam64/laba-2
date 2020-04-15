#include <iostream>
#include  "car.h"
#include  <string>
using namespace std;
int main()
{
setlocale(LC_ALL,"RUS");
string model,Color;
int speed,a;

cout<<"Введите модель,максимальную скорость, цвет машины: ";
cin>>model;
cout<<endl;
cin>>speed;
cout<<endl;
cin>>Color;
cout<<endl;
car bmw;
car mersedes(240,"blue","G-class");
car mini(mersedes);
bmw.setspeed(speed);
bmw.setmodel(model);
bmw.setColor(Color);
cout<<"\n Mетод set"<<endl;
bmw.printf();
cout<<"\n Выберите, что вы хотите сделать \n 1-прировнять скорость\n 2-Равна ли скорость? \n 3-Не равна скорость? \n 4-медленее? \n 5-быстрее \n 6-быстрее или скорость равна \n 7-медленее или скорость равна \n 8-увеличить скорость на 20 \n 9-уменьшить скорость на 20"<<endl;
cin>>a;
cout<<endl;
switch(a)
{
case 1:
mersedes=bmw;
mersedes.printf();
break;
case 2:
if (bmw==mersedes)
{
    cout<<"равны"<<endl;
}
else
    cout<<"не равны"<<endl;
break;

case 3:
    if (bmw!=mersedes)
{
    cout<<"не равны"<<endl;
}
else
    cout<<"равны"<<endl;
break;
case 4:
    if (mersedes>bmw)
{
    cout<<"ваша машина медленее"<<endl;
}
else
    cout<<"ваша машина быстрее"<<endl;
break;
case 5:
    if (mersedes<bmw)
{
    cout<<"ваша машина быстрее"<<endl;
}
else
    cout<<"ваша машина медленее"<<endl;
break;
case 6:
    if (mersedes<=bmw)
{
    cout<<"ваша машина быстрее или скорость равна"<<endl;
}
else
    cout<<"ваша машина медленее"<<endl;
break;
case 7:
    if (mersedes>=bmw)
{
    cout<<"ваша машина медленее или скорость равна"<<endl;
}
else
    cout<<"ваша машина быстрее"<<endl;
break;
case 8:
++bmw;
bmw.printf();
break;
case 9:
--bmw;
bmw.printf();
break;
}
return 0;
}
