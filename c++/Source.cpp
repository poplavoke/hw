#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	bool light, shtora, lampOn, manana;
	cout << "�� ����� ����? ���� ��-������� 1, ���� ��� 0" << endl;
	
	cin >> light;
	if (!cin)
	{
		cout << "������ ���� ���";
		exit(0);
	}
	cout << "����� ����������? ���� ��-������� 1, ���� ��� 0" << endl;
	cin >> shtora;
	cout << "����� ��������? ���� ��-������� 1, ���� ��� 0" << endl;
	cin >> lampOn;
	if ((light && shtora) || (lampOn))
		cout << "� ������� ������";
	else cout << "� ������� �����";
	

}