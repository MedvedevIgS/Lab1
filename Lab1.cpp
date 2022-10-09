#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

void main4()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");

	int step;

	cout << "Введите количество итераций: ";
	cin >> step;

	long double pi, step_a;
	pi = 0;
	for (int i = 0; i < step+1; i++)
	{
		step_a = 1.0/(2.0*i+1.0);
		if (i % 2 == 0)
			pi = pi + step_a;
		else
			pi = pi - step_a;
	}

	printf("Pi=%20.20lf\n", pi*4.0);




	cout << endl;
}


void main3()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");

	int c0;
	cout << "Введите с0:";
	cin >> c0;

	int step = 0;

	bool flag=true;

	while (flag)
	{
		flag = false;
		if (c0 % 2 == 0)
			c0 = c0 / 2;
		else
			c0 = 3 * c0 + 1;
		cout << c0 << endl;
		step++;
		if (c0 != 1)
			flag = true;
	}

	cout << "steps = " << step << endl;






	cout << endl;
}


void main2() 
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	int age, day;
	string m;

	cout << "Введите год: ";
	cin >> age;

	int a, b, c, d, e;
	a = age % 19;
	b = age % 4;
	c = age % 7;
	d = (a * 19 + 24) % 30;
	e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if ((d + e) < 10)
	{
		m = "March";
		day = d + e + 22;
	}
	else
	{
		m = "April";
		day = d + e - 9;
	}

	cout << m << " " << day<<endl<<endl;

}

void main1()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	float v = 2;
	float result = (v + 1) * 2;
	cout << "result: " << result << " expected result : 6" << endl;
	result = (v + 1) * (v + 2) * 2;
	cout << "result: " << result << " expected result : 24" << endl;
	result = (v - 1) * 2 + (2 * 2);
	cout << "result: " << result << " expected result : 6" << endl;
	result = (v + v) * (v + v) * 2;
	cout << "result: " << result << " expected result : 32" << endl;
	result = ((int)v % 2) * (v + 2 * 2);
	cout << "result: " << result << " expected result : 0" << endl;
	cout << endl;
}



void main()
{
	setlocale(LC_ALL, "Russian");
	int menu;
	bool flagExit = true;
	while (flagExit)
	{
		cout << "Выберете пункт" << endl << "Пункт 1.1 :1" << endl << "Пункт 1.2 :2" << endl << "Пункт 1.3 :3" << endl << "Пункт 1.4 :4" << endl << "Ввод: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			main1();
			break;
		case 2:
			main2();
			break;
		case 3:
			main3();
			break;
		case 4:
			main4();
			break;
		default:
			flagExit = false;
			break;
		}
	}
}