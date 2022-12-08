#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	int count;
	cout << "введите число" << endl;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		x% i;
		if (x % i == 0)
			count = i;
	
	}
	cout << "числа на которые нацело делится ваше число" << endl << count;
}
