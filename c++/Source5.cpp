#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	cout << "введите число";
	cin >> x;
	int a[10] = { 15,4,65,19,4,245,45,93,12,8 };
	int count = 1;
	cout << a << endl;
	
	for (int i = 0; i < 10; i++)
	{
		if (a[i] < x)
			a[i] = 0;

		
	}
	cout << a<<endl;
	cout << count;
}