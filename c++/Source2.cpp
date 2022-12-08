#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int num;
	cout << "введите число" << endl;
	cin >> num;
	if (num==0)
	{
		cout << 0;
		
	}
	else
	{
if (num % 2 == 1)
		{
		cout << "число нечетное";
		}
	else
	{
		cout << "ваше число четное";
	}
	}
	
	
	


}



	