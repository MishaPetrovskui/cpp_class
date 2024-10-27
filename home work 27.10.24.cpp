#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

bool isLeapYear(int year) {
    return (year % 400 == 0 && year % 100 != 0) || (year % 4 == 0);
}

bool isValidDate(Date date) {
    if (date.year < 0 || date.month < 1 || date.month > 12 || date.day < 1) {
        return false;
    }

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(date.year)) {
        daysInMonth[1] = 29;
    }

    return date.day <= daysInMonth[date.month - 1];
}

int daysInMonth(Date date) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(date.year)) {
        daysInMonth[1] = 29;
    }

    int days = 0;
    for (int i = 0; i < date.month - 1; ++i) {
        days += daysInMonth[i];
    }
    days += date.day;
    return days;
}

int daysBetweenDates(Date date1, Date date2) {
    int days1 = date1.year * 365 + daysInMonth(date1);
    int days2 = date2.year * 365 + daysInMonth(date2);

    for (int i = 0; i < date1.year; ++i) {
        if (isLeapYear(i)) days1++;
    }
    for (int i = 0; i < date2.year; ++i) {
        if (isLeapYear(i)) days2++;
    }

    return days2 - days1;
}

int main() {
    Date date1 = { 1, 1, 2024 }, date2 = { 28, 2, 2025 };

    if (isValidDate(date1) && isValidDate(date2)) {
        cout << "Days between dates: " << daysBetweenDates(date1, date2) << endl;
    }
    else {
        cout << "ERROR!" << endl;
    }

    return 0;
}
