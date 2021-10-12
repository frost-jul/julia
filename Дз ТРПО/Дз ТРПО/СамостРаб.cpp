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
	cout << "×čńëî â îáđŕňíîě ďîđ˙äęĺ " << a << b << c << endl;
	double geometric;
	geometric = pow(a * b * c, 1. / 3.);
	cout << "Ńđĺäíĺĺ ăĺîěĺňđč÷ĺńęîĺ öčôđ ÷čńëŕ đŕâíî " << geometric << endl;
	if (a % 2 == 0) k++;
	if (b % 2 == 0) k++;
	if (c % 2 == 0) k++;
	cout << "Ęîëč÷ĺńâî ÷ĺňíűő öčôđ đŕâíî " << k << endl;
	switch (c)
	{
	case 1: cout << "Ńňî ";
		break;
	case 2: cout << "Äâĺńňč ";
		break;
	case 3: cout << "Ňđčńňŕ ";
		break;
	case 4: cout << "×ĺňűđĺńňŕ ";
		break;
	case 5: cout << "Ď˙ňüńîň ";
		break;
	case 6: cout << "Řĺńňüńîň ";
		break;
	case 7: cout << "Ńĺěüńîň ";
		break;
	case 8: cout << "Âîńĺěüńîň ";
		break;
	case 9: cout << "Äĺâ˙ňüńîň ";
		break;

	}
	switch (number - (number / 100) * 100)
	{
	case 10: cout << "äĺń˙ňü " << endl;
		break;
	case 11: cout << "îäčííŕäöŕňü " << endl;
		break;
	case 12: cout << "äâĺíŕäöŕňü " << endl;
		break;
	case 13: cout << "ňđčíŕäöŕňü " << endl;
		break;
	case 14: cout << "÷ĺňűđíŕäöŕňü " << endl;
		break;
	case 15: cout << "ď˙ňíŕäöŕňü " << endl;
		break;
	case 16: cout << "řĺńňíŕäöŕňü " << endl;
		break;
	case 17: cout << "ńĺěíŕäöŕňü " << endl;
		break;
	case 18: cout << "âîńĺěíŕäöŕňü " << endl;
		break;
	case 19: cout << "äĺâ˙ňíŕäöŕňü " << endl;
		break;

	}
	if ((number - (number / 100) * 100) > 19 || (number - (number / 100) * 100) < 10)
	{
		switch (b)
		{
		case 2: cout << "äâŕäöŕňü ";
			break;
		case 3: cout << "ňđčäöŕňü ";
			break;
		case 4: cout << "ńîđîę ";
			break;
		case 5: cout << "ď˙ňüäĺń˙ň ";
			break;
		case 6: cout << "řĺńňüäĺń˙ň ";
			break;
		case 7: cout << "ńĺěäĺń˙ň ";
			break;
		case 8: cout << "âîńĺěäĺń˙ň ";
			break;
		case 9: cout << "äĺâ˙íîńňŕ ";
			break;

		}
		switch (a)
		{
		case 1: cout << "îäčí " << endl;
			break;
		case 2: cout << "äâŕ " << endl;
			break;
		case 3: cout << "ňđč " << endl;
			break;
		case 4: cout << "÷ĺňűđĺ " << endl;
			break;
		case 5: cout << "ď˙ňü " << endl;
			break;
		case 6: cout << "řĺńňü " << endl;
			break;
		case 7: cout << "ńĺěü " << endl;
			break;
		case 8: cout << "âîńĺěü " << endl;
			break;
		case 9: cout << "äĺâ˙ňü " << endl;
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
	cout << "Čçěĺíĺíč˙ äë˙ GitHub" << endl;
	cout << "1 2 3" << endl;
        cout << "changes for GitHub" << endl;
	cout << "Đŕíäîěíîĺ ÷čńëî đŕâíî " << number;
	return 0;
}
