#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	bool light, shtora, lampOn, manana;
	cout << "на улице день? Если да-введите 1, если нет 0" << endl;
	
	cin >> light;
	if (!cin)
	{
		cout << "смотри выше чел";
		exit(0);
	}
	cout << "шторы раздвинуты? Если да-введите 1, если нет 0" << endl;
	cin >> shtora;
	cout << "лампа включена? Если да-введите 1, если нет 0" << endl;
	cin >> lampOn;
	if ((light && shtora) || (lampOn))
		cout << "в комнате светло";
	else cout << "в комнате темно";
	

}