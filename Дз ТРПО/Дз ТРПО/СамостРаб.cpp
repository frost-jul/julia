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
	cout << "����� � �������� ������� " << a << b << c << endl;
	double geometric;
	geometric = pow(a * b * c, 1. / 3.);
	cout << "������� �������������� ���� ����� ����� " << geometric << endl;
	if (a % 2 == 0) k++;
	if (b % 2 == 0) k++;
	if (c % 2 == 0) k++;
	cout << "��������� ������ ���� ����� " << k << endl;
	switch (c)
	{
	case 1: cout << "��� ";
		break;
	case 2: cout << "������ ";
		break;
	case 3: cout << "������ ";
		break;
	case 4: cout << "��������� ";
		break;
	case 5: cout << "������� ";
		break;
	case 6: cout << "�������� ";
		break;
	case 7: cout << "������� ";
		break;
	case 8: cout << "��������� ";
		break;
	case 9: cout << "��������� ";
		break;

	}
	switch (number - (number / 100) * 100)
	{
	case 10: cout << "������ " << endl;
		break;
	case 11: cout << "����������� " << endl;
		break;
	case 12: cout << "���������� " << endl;
		break;
	case 13: cout << "���������� " << endl;
		break;
	case 14: cout << "������������ " << endl;
		break;
	case 15: cout << "���������� " << endl;
		break;
	case 16: cout << "����������� " << endl;
		break;
	case 17: cout << "���������� " << endl;
		break;
	case 18: cout << "������������ " << endl;
		break;
	case 19: cout << "������������ " << endl;
		break;

	}
	if ((number - (number / 100) * 100) > 19 || (number - (number / 100) * 100) < 10)
	{
		switch (b)
		{
		case 2: cout << "�������� ";
			break;
		case 3: cout << "�������� ";
			break;
		case 4: cout << "����� ";
			break;
		case 5: cout << "��������� ";
			break;
		case 6: cout << "���������� ";
			break;
		case 7: cout << "�������� ";
			break;
		case 8: cout << "���������� ";
			break;
		case 9: cout << "��������� ";
			break;

		}
		switch (a)
		{
		case 1: cout << "���� " << endl;
			break;
		case 2: cout << "��� " << endl;
			break;
		case 3: cout << "��� " << endl;
			break;
		case 4: cout << "������ " << endl;
			break;
		case 5: cout << "���� " << endl;
			break;
		case 6: cout << "����� " << endl;
			break;
		case 7: cout << "���� " << endl;
			break;
		case 8: cout << "������ " << endl;
			break;
		case 9: cout << "������ " << endl;
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
	cout << "��������� ��� GitHub" << endl;
	cout << "1 2 3" << endl;

	cout << "��������� ����� ����� " << number;
	return 0;
}