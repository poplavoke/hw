#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	int count;
	cout << "������� �����" << endl;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		x% i;
		if (x % i == 0)
			count = i;
	
	}
	cout << "����� �� ������� ������ ������� ���� �����" << endl << count;
}
