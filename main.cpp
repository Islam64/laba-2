#include <iostream>
#include  "car.h"
#include  <string>
using namespace std;
int main()
{
setlocale(LC_ALL,"RUS");
string model,Color;
int speed,a;

cout<<"������� ������,������������ ��������, ���� ������: ";
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
cout<<"\n M���� set"<<endl;
bmw.printf();
cout<<"\n ��������, ��� �� ������ ������� \n 1-���������� ��������\n 2-����� �� ��������? \n 3-�� ����� ��������? \n 4-��������? \n 5-������� \n 6-������� ��� �������� ����� \n 7-�������� ��� �������� ����� \n 8-��������� �������� �� 20 \n 9-��������� �������� �� 20"<<endl;
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
    cout<<"�����"<<endl;
}
else
    cout<<"�� �����"<<endl;
break;

case 3:
    if (bmw!=mersedes)
{
    cout<<"�� �����"<<endl;
}
else
    cout<<"�����"<<endl;
break;
case 4:
    if (mersedes>bmw)
{
    cout<<"���� ������ ��������"<<endl;
}
else
    cout<<"���� ������ �������"<<endl;
break;
case 5:
    if (mersedes<bmw)
{
    cout<<"���� ������ �������"<<endl;
}
else
    cout<<"���� ������ ��������"<<endl;
break;
case 6:
    if (mersedes<=bmw)
{
    cout<<"���� ������ ������� ��� �������� �����"<<endl;
}
else
    cout<<"���� ������ ��������"<<endl;
break;
case 7:
    if (mersedes>=bmw)
{
    cout<<"���� ������ �������� ��� �������� �����"<<endl;
}
else
    cout<<"���� ������ �������"<<endl;
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
