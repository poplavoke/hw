#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int num;
	cout << "������� �����" << endl;
	cin >> num;
	if (num==0)
	{
		cout << 0;
		
	}
	else
	{
if (num % 2 == 1)
		{
		cout << "����� ��������";
		}
	else
	{
		cout << "���� ����� ������";
	}
	}
	
	
	


}



	