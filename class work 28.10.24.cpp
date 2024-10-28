#include <iostream>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;

int randint(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

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
    Date randomDate()
    {
        Date date;
        date.year = 2024;
        date.month = randint(10, 12);
        date.day = randint(1, date.getDaysInMonth());
        return date;
    }
};

struct Train
{
    int number;
    string startPoint, endPoint;
    Date startDate, endDate;
    int seatsTotal, seatsTaken;
    double price;

    void print()
    {
        cout << number << " | " << startPoint << " - " << endPoint << " | ";
        startDate.print_date(); cout << "/"; endDate.print_date(); cout << " | ";
        cout << price << " grn | ";
    }
    int getFreeSeats() { return seatsTotal - seatsTaken; }

};

Train generateTrain()
{
    Train train;
    train.number = randint(1, 200);
    string city[] = { "Kiev", "Lvov", "Odesa", "Harkiv", "Dripro" };
    int startPoint = randint(0, 4), endPoint;
    do {
        endPoint = randint(0, 4);
    } while (startPoint == endPoint);
    train.startPoint = city[startPoint], train.endPoint = city[endPoint], train.startDate = train.startDate.randomDate();
    do {
        train.endDate = train.endDate.randomDate();
    } while (train.endDate.asDays() < train.startDate.asDays());
    train.price = randint(20000, 70000) / 100.0;
    train.seatsTotal = randint(300, 700);
    train.seatsTaken = randint(0, train.seatsTotal);
    return train;
}

void bubbleSortTrains(Train trains[], const int len) {
    bool is_changed = true;
    for (int n = 0; n < len - 1 && is_changed; n++) {
        is_changed = false;
        for (int i = 0; i < len - n - 1; i++) {
            if (trains[i].startDate.asDays() > trains[i + 1].startDate.asDays()) {
                swap(trains[i], trains[i + 1]);
                is_changed = true;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    Train trains[10];
    double money = 0;

    for (int i = 0; i < 10; i++) {
        trains[i] = generateTrain();
        money += trains[i].price;
    }

    bubbleSortTrains(trains, 10);

    for (int i = 0; i < 10; i++) {
        trains[i].print();
        cout << endl;
    }
    cout << money << endl;
    return 0;
}
