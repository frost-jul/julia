#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(0, "");
	int number = rand() % (999 - 100 + 1) + 100;
	int a = number % 10, b = (number / 10) % 10, c = (number / 100) % 10;
	int k = 0;
	cout << "Число в обратном порядке " << a << b << c << endl;
	double geometric;
	geometric = pow(a * b * c, 1. / 3.);
	cout << "Среднее геометрическое цифр числа равно " << geometric << endl;
	if (a % 2 == 0) k++;
	if (b % 2 == 0) k++;
	if (c % 2 == 0) k++;
	cout << "Количесво четных цифр равно " << k << endl;
	switch (c)
	{
	case 1: cout << "Сто ";
		break;
	case 2: cout << "Двести ";
		break;
	case 3: cout << "Триста ";
		break;
	case 4: cout << "Четыреста ";
		break;
	case 5: cout << "Пятьсот ";
		break;
	case 6: cout << "Шестьсот ";
		break;
	case 7: cout << "Семьсот ";
		break;
	case 8: cout << "Восемьсот ";
		break;
	case 9: cout << "Девятьсот ";
		break;

	}
	switch (number - (number / 100) * 100)
	{
	case 10: cout << "десять " << endl;
		break;
	case 11: cout << "одиннадцать " << endl;
		break;
	case 12: cout << "двенадцать " << endl;
		break;
	case 13: cout << "тринадцать " << endl;
		break;
	case 14: cout << "четырнадцать " << endl;
		break;
	case 15: cout << "пятнадцать " << endl;
		break;
	case 16: cout << "шестнадцать " << endl;
		break;
	case 17: cout << "семнадцать " << endl;
		break;
	case 18: cout << "восемнадцать " << endl;
		break;
	case 19: cout << "девятнадцать " << endl;
		break;

	}
	if ((number - (number / 100) * 100) > 19 || (number - (number / 100) * 100) < 10)
	{
		switch (b)
		{
		case 2: cout << "двадцать ";
			break;
		case 3: cout << "тридцать ";
			break;
		case 4: cout << "сорок ";
			break;
		case 5: cout << "пятьдесят ";
			break;
		case 6: cout << "шестьдесят ";
			break;
		case 7: cout << "семдесят ";
			break;
		case 8: cout << "восемдесят ";
			break;
		case 9: cout << "девяноста ";
			break;

		}
		switch (a)
		{
		case 1: cout << "один " << endl;
			break;
		case 2: cout << "два " << endl;
			break;
		case 3: cout << "три " << endl;
			break;
		case 4: cout << "четыре " << endl;
			break;
		case 5: cout << "пять " << endl;
			break;
		case 6: cout << "шесть " << endl;
			break;
		case 7: cout << "семь " << endl;
			break;
		case 8: cout << "восемь " << endl;
			break;
		case 9: cout << "девять " << endl;
			break;

		}
	}
	int count = 0;
	for (int j = 2; j <= number; j++)
	{
		count = 0;
		for (int i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				count++;
			}
		}
		if (count == 0)
			cout << j << " ";
	}
	cout << endl;
	cout << "Изменения для GitHub" << endl;
	cout << "1 2 3" << endl;

	cout << "Рандомное число равно " << number;
	return 0;
}