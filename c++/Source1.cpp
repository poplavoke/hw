#include<iostream>
using namespace std;
void main()
{
setlocale(LC_ALL, "rus");
double a;
double b;
cout << "������� ������ �����"<<endl ;
cin >> a;
cout << "������� 2 �����" << endl;
cin >> b;
cout << "�������� ��������" <<endl;
int c;
cout << "1. +\n 2. - \n 3. / \n 4. * " <<endl;
cin >> c;
switch (c)
{
case 1:
	cout << a + b;
	 break;
case 2:
	cout << a - b;
	break;
case 3 :
	cout << a / b;
	break;
case 4:
	cout << a * b;
	break;

default:
	break;
}


}
	

