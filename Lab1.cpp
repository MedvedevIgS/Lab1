#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

void part3_4()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	
	int num[4];
	cout << "Введите числа" << endl;
	cout << "a=";
	cin >> num[0];
	cout << "b=";
	cin >> num[1];
	cout << "c=";
	cin >> num[2];
	cout << "d=";
	cin >> num[3];
	int ind;
	if (num[0] == num[1])
	{
		if (num[0] == num[2])
			ind = 3;
		else
			ind = 2;
	}
	else
	{
		if (num[1] == num[3])
			ind = 0;
		else
			ind = 1;
	}

	switch (ind)
	{
	case 0:
		cout << num[0];
		break;
	case 1:
		cout << num[1];
		break;
	case 2:
		cout << num[2];
		break;
	case 3:
		cout << num[3];
		break;
	}
	cout << endl;
	cout << endl;
}

void part3_3()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	float a, b, x;

	cout << "Введите длину двух прилижающих сторон паралеллограмма a и b и угол мкжду ними x" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "x=";
	cin >> x;
	cout << endl;
	if (a == b)
	{
		if (x == 90)
			cout << "Вид паралеллограмма: Квадрат"<<endl;
		else
			cout << "Вид паралеллограмма: Ромб" << endl;
	}
	else
	{
		if (x == 90)
			cout << "Вид паралеллограмма: Прямоугольник" << endl;
		else
			cout << "Вид паралеллограмма: Обыкновенный параллелограмм" << endl;
	}


	cout << endl;
}

void part3_2()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "Введите трехзначное число: ";
	cin >> numb;
	bool flag100 = true;
	while (flag100)
	{
		if (numb / 1000 == 0 && numb / 100 != 0)
			flag100 = false;
		else
		{
			cout << "Пожалуйста введите трехзначное число: ";
			cin >> numb;
		}
	}
	int numb_100, numb_1;
	numb_100 = numb / 100;
	numb_1 = ((numb % 100) % 10);
	int numb2 = numb;
	int iter = 0;
	if (numb_100==numb_1)
		cout << "Данное число является палиндромом" << endl;
	else
	{
		while (numb_100 != numb_1)
		{
			numb2++;
			numb_100 = numb2 / 100;
			numb_1 = ((numb2 % 100) % 10);
			iter++;
		}
		cout << "Данное число не является палиндромом" << endl << "Ближайшее такое число находится через " << iter << endl;
	}

	cout << endl;
}

void part3_1()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "Введите двухзначное число: ";
	cin >> numb;
	bool flag100 = true;
	while (flag100)
	{
		if (numb / 100 == 0 && numb / 10 != 0)
			flag100 = false;
		else
		{
			cout << "Пожалуйста введите двухзначное число: ";
			cin >> numb;
		}
	}
	int numb_f10, numb_l1;
	numb_f10 = numb / 10;
	numb_l1 = numb % 10;
	int numb2 = numb;
	int iter=0;
	if ((numb_l1 + numb_f10) / 10 != 0)
		cout << "Сумма цифр этого числа является двухзначным числом"<<endl;
	else
	{
		while ((numb_l1 + numb_f10) / 10 == 0)
		{
			numb2 ++;
			numb_f10 = numb2 / 10;
			numb_l1 = numb2 % 10;
			iter++;
		}
		cout << "Сумма цифр этого числа не является двухзначным числом" << endl << "Ближайшее такое число находится через " << iter << endl;
	}



	cout << endl;
}

void part3()
{
	cout << endl;
	setlocale(LC_ALL, "Russian");
	int menu;
	bool flagExit3 = true;
	while (flagExit3)
	{
		cout << "Выберете пункт" << endl << "Пункт 3.1 :1" << endl << "Пункт 3.2 :2" << endl << "Пункт 3.3 :3" << endl << "Пункт 3.4 :4" << endl << "Ввод: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			part3_1();
			break;
		case 2:
			part3_2();
			break;
		case 3:
			part3_3();
			break;
		case 4:
			part3_4();
			break;
		default:
			flagExit3 = false;
			break;
		}
	}

	cout << endl;
}





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
		cout << "Выберете пункт" << endl << "Пункт 1.1 :1" << endl << "Пункт 1.2 :2" << endl << "Пункт 1.3 :3" << endl << "Пункт 1.4 :4" << endl<< "Часть 3 :5" << endl << "Ввод: ";
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
		case 5:
			part3();
			break;

		default:
			flagExit = false;
			break;
		}
	}
}