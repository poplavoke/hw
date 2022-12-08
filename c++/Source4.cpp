#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int maxim;
	int min;
	int x[15] = { 3,9,153,4,0,2,9,4,-7,27,8,4,9,-6,7};
	maxim = x[0];
	min = x[0];
	for (int i = 0; i <15; i++)
	{
		if (x[i]>min)
		{
			min = x[i];
		}
		if (maxim<x[i])
		{
			maxim=x[i];
		}
	}
	cout << maxim<<endl;
	cout << min;

}