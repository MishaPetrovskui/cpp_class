#include <iostream>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <conio.h>
using namespace std;

int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

void print_array(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

struct Time
{
	int hours, minuts, secunds;

	bool isCorrect()
	{
		if (hours < 0 || hours > 24)
			return false;
		if (minuts < 0 || minuts > 59)
			return false;
		if (secunds < 0 || secunds > 59)
			return false;
		return true;
	}
	int sumaInSecunds()
	{
		return (hours * 3600) + (minuts * 60) + secunds;
	}
	Time VIVOD(Time b)
	{
		int secundi = b.sumaInSecunds() - sumaInSecunds();
		Time time;
		time.hours = secundi / 3600;
		time.minuts = (secundi % 3600) / 60;
		time.secunds = ((secundi % 3600) % 60);
		return time;
	}

};

struct Date {
	int day, month, year;

	bool isCorrect()
	{
		if (month < 1 || month > 12)
			return false;
		if (day < 1 || day > getDaysInMonth())
			return false;
		if (year < 0)
			return false;

		return true;
	}

	int getDaysInMonth()
	{
		return getDaysInMonth(month, year);
	}

	int getDaysInMonth(int _month, int _year)
	{
		switch (_month)
		{
		case 1: return 31;
		case 2: return isLeapYear(_year) ? 29 : 28;
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;
		default: return 0;
		}
	}

	bool isLeapYear()
	{
		return isLeapYear(year);
	}

	bool isLeapYear(int _year)
	{
		return _year % 400 == 0 || _year % 4 == 0 && _year % 100 != 0;
	}

	void print_date()
	{
		cout << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "") << month << "." << year;
	}

	int asDays()
	{
		int year_in_days = year * 365;
		for (int i = 0; i <= year; i++)
			if (isLeapYear(i))
				year_in_days++;

		// int daysInMonth[12] = { 31, isLeapYear() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int month_in_days = 0;
		for (int i = 0; i < month - 1; i++)
			month_in_days += getDaysInMonth(i, year);

		return year_in_days + month_in_days + day;
	}
};

int main()
{
	srand(time(NULL));
	/*
	Date date1 = { 8, 10, 2024 }, date2 = { 10, 8, 2020 };

	if (date1.asDays() < date2.asDays())
		date1.print_date();
	else
		date2.print_date();
	*/
	Date dates_list[5] = {
		{23, 10, 2024},
		{10, 02, 2020},
		{22, 10, 2024},
		{23, 10, 2024},
		{02, 9, 1945}
	};

	for (int i = 0; i < 5; i++)
	{
		dates_list[i].print_date();
		cout << endl;
	}
	Date earlierDate = dates_list[0];
	for (int i = 1; i < 5; i++)
	{
		if (dates_list[i].asDays() < earlierDate.asDays())
			earlierDate = dates_list[i];
	}
	cout << "Cfvf hfyyz lfnf: ";
	earlierDate.print_date();

	return 0;
}
