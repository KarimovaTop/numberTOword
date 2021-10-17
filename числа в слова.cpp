#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void NumberToWord(int num, char* s)
{
	char numArr[5];
	int i, lastPosition, nextPosition;

	for (i = 0; num > 0; i++)
	{
		numArr[i] = num % 10 + '0';
		num /= 10;
	}

	numArr[i] = '\0';

	lastPosition = --i;
	for (; i >= 0; i--)
		if (i == 3)
		{
			switch (numArr[i])
			{
			case '1': strcpy(s, "тысяча "); break;
			case '2': strcpy(s, "две тысячи "); break;
			case '3': strcpy(s, "три тысячи "); break;
			case '4': strcpy(s, "четыре тысячи "); break;
			case '5': strcpy(s, "пять тысяч "); break;
			case '6': strcpy(s, "шесть тысяч "); break;
			case '7': strcpy(s, "семь тысяч "); break;
			case '8': strcpy(s, "восемь тысяч "); break;
			case '9': strcpy(s, "девять тысяч "); break;
			}
			nextPosition = strlen(s);
		}
		else if (i == 2)
		{
			switch (numArr[i])
			{
			case '1':
				if (lastPosition == i) strcpy(s, "сто ");
				else strcpy(s + nextPosition, "сто ");
				break;
			case '2':
				if (lastPosition == i) strcpy(s, "двести ");
				else strcpy(s + nextPosition, "двести ");
				break;
			case '3':
				if (lastPosition == i) strcpy(s, "триста ");
				else strcpy(s + nextPosition, "триста ");
				break;
			case '4':
				if (lastPosition == i) strcpy(s, "четыреста ");
				else strcpy(s + nextPosition, "четыреста ");
				break;
			case '5':
				if (lastPosition == i) strcpy(s, "пятьсот ");
				else strcpy(s + nextPosition, "пятьсот ");
				break;
			case '6':
				if (lastPosition == i) strcpy(s, "шестьсот ");
				else strcpy(s + nextPosition, "шестьсот ");
				break;
			case '7':
				if (lastPosition == i) strcpy(s, "семьсот ");
				else strcpy(s + nextPosition, "семьсот ");
				break;
			case '8':
				if (lastPosition == i) strcpy(s, "восемьсот ");
				else strcpy(s + nextPosition, "восемьсот ");
				break;
			case '9':
				if (lastPosition == i) strcpy(s, "девятьсот ");
				else strcpy(s + nextPosition, "девятьсот ");
				break;
			}
			nextPosition = strlen(s);
		}
		else if (i == 1)
		{
			switch (numArr[i])
			{
			case '1':
				switch (numArr[i - 1])
				{
				case '0':
					if (lastPosition == i) strcpy(s, "десять ");
					else strcpy(s + nextPosition, "десять ");
					break;
				case '1':
					if (lastPosition == i) strcpy(s, "одиннадцать ");
					else strcpy(s + nextPosition, "одиннадцать ");
					break;
				case '2':
					if (lastPosition == i) strcpy(s, "двенадцать ");
					else strcpy(s + nextPosition, "двенадцать ");
					break;
				case '3':
					if (lastPosition == i) strcpy(s, "тринадцать ");
					else strcpy(s + nextPosition, "тринадцать ");
					break;
				case '4':
					if (lastPosition == i) strcpy(s, "четырнадцать ");
					else strcpy(s + nextPosition, "четырнадцать ");
					break;
				case '5':
					if (lastPosition == i) strcpy(s, "пятнадцать ");
					else strcpy(s + nextPosition, "пятнадцать ");
					break;
				case '6':
					if (lastPosition == i) strcpy(s, "шестнадцать ");
					else strcpy(s + nextPosition, "шестнадцать ");
					break;
				case '7':
					if (lastPosition == i) strcpy(s, "семнадцать ");
					else strcpy(s + nextPosition, "семнадцать ");
					break;
				case '8':
					if (lastPosition == i) strcpy(s, "восемнадцать ");
					else strcpy(s + nextPosition, "восемнадцать ");
					break;
				case '9':
					if (lastPosition == i) strcpy(s, "девятнадцать ");
					else strcpy(s + nextPosition, "девятнадцать ");
					break;
				}
				break;
			case '2':
				if (lastPosition == i) strcpy(s, "двадцать ");
				else strcpy(s + nextPosition, "двадцать ");
				break;
			case '3':
				if (lastPosition == i) strcpy(s, "тридцать ");
				else strcpy(s + nextPosition, "тридцать ");
				break;
			case '4':
				if (lastPosition == i) strcpy(s, "сорок ");
				else strcpy(s + nextPosition, "сорок ");
				break;
			case '5':
				if (lastPosition == i) strcpy(s, "пятьдесят ");
				else strcpy(s + nextPosition, "пятьдесят ");
				break;
			case '6':
				if (lastPosition == i) strcpy(s, "шестьдесят ");
				else strcpy(s + nextPosition, "шестьдесят ");
				break;
			case '7':
				if (lastPosition == i) strcpy(s, "семьдесят ");
				else strcpy(s + nextPosition, "семьдесят ");
				break;
			case '8':
				if (lastPosition == i) strcpy(s, "восемьдесят ");
				else strcpy(s + nextPosition, "восемьдесят ");
				break;
			case '9':
				if (lastPosition == i) strcpy(s, "девяносто ");
				else strcpy(s + nextPosition, "девяносто ");
				break;
			}
			nextPosition = strlen(s);
		}
		else if (i == 0 && numArr[i + 1] != '1')
		{
			switch (numArr[i])
			{
			case '1':
				if (lastPosition == i) strcpy(s, "один ");
				else strcpy(s + nextPosition, "один ");
				break;
			case '2':
				if (lastPosition == i) strcpy(s, "два ");
				else strcpy(s + nextPosition, "два ");
				break;
			case '3':
				if (lastPosition == i) strcpy(s, "три ");
				else strcpy(s + nextPosition, "три ");
				break;
			case '4':
				if (lastPosition == i) strcpy(s, "четыре ");
				else strcpy(s + nextPosition, "четыре ");
				break;
			case '5':
				if (lastPosition == i) strcpy(s, "пять ");
				else strcpy(s + nextPosition, "пять ");
				break;
			case '6':
				if (lastPosition == i) strcpy(s, "шесть ");
				else strcpy(s + nextPosition, "шесть ");
				break;
			case '7':
				if (lastPosition == i) strcpy(s, "семь ");
				else strcpy(s + nextPosition, "семь ");
				break;
			case '8':
				if (lastPosition == i) strcpy(s, "восемь ");
				else strcpy(s + nextPosition, "восемь ");
				break;
			case '9':
				if (lastPosition == i) strcpy(s, "девять ");
				else strcpy(s + nextPosition, "девять ");
				break;
			}
		}
}

void PrintRub(int num)
{
	if (num % 100 >= 10 && num % 100 <= 20 || num % 10 >= 5 && num % 10 <= 9 || num % 10 == 0)
		cout << "рублей";
	else if (num % 10 >= 2 && num % 10 <= 4)
		cout << "рубля";
	else
		cout << "рубль";
}

int CheckErrors(char input[])
{
	string error = "ERROR || Нужно ввести число от 1 до 9999.\n";
	char numberStr[4];

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (!(input[i] >= 48 && input[i] <= 57) || (input[i] == 48 && i == 0))
		{
			cout << error;
			return -1;
		}
		else
			if (i != 4)
				numberStr[i] = input[i];
			else
			{
				cout << error;
				return -1;
			}
	}
	input[4] = '\0';

	return atoi(input);
}

int main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251");
	system("cls");

	int num;
	char s[80];
	char input[1000];

	while (true)
	{
		cout << "Введите сумму для пополнения счета от 1 до 9999: ";
		cin >> input;

		if ((num = CheckErrors(input)) != -1)
		{
			NumberToWord(num, s);
			for (int i = 0; i < strlen(s); i++)
				if (i == 0) cout << (unsigned char)toupper(s[i]);
				else cout << s[i];
			PrintRub(num);
			cout << endl;
		}
	}

	return 0;
}
