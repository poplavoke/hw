#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int x[31] = { 1,1,1,3,5,3,2,2,2,3,4,5,3,4,5,5,5,5,3,5,4,2,5,6,6,7,8,9,9,4,6};
	int count = 1;
	int maxim = 0;
	int index;
	for (int i = 0; i <31; i++)
	{
		if (x[i] == x[i + 1])
		{
			count++;
			if (count>maxim )
			{
				maxim = count;
				index = i-maxim +2;
			}
			

		}	
		else
		{
			count = 1;
		}
	}
	cout << maxim<<endl;
	cout << index;

}
