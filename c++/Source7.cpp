#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x[10] = { 1, -7, -745, 744, 15,105, -2, 45, -65, 4 };
	int min=0;
	int max=0;
	
	for (int i = 0; i < 10; i++)
	{
		if (x[i] < 0)
		{
			x[i] = -x[i];
		
		}

		if (max < x[i])
		max = x[i];
		if (min>x[i])
		{
			min = x [i];
		}
		
	}
	cout << min << endl << max;
}
