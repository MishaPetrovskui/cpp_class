#include <iostream>
#include <time.h>
#include <windows.h>
#include <string>
#define FILE_PATH "students.txt"

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

struct Student
{
    char name[20];
    char group[10];
    int grades[5];
    float AVG()
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += grades[i];
        }
        return (sum / 5);
    }
};

Student f_student()
{
    Student student;
    cout << "Input name of student: ";
    cin >> student.name;
    cout << "Input group of student: ";
    cin >> student.group;
    for (int i = 0; i < 5; i++)
    {
        cout << "Input " << i + 1 << "`st grade: ";
        cin >> student.grades[i];
    }
    return student;
}

void vivod()
{
    Student student;
    FILE* file;
    fopen_s(&file, FILE_PATH, "rb");
    int po = 1;
    while (fread(&student, sizeof(Student), 1, file))
    {
        cout << po++ << ". " << student.name << " | " << student.group << " | ";
        for (int i = 0; i < 5; i++)
        {
            cout << student.grades[i] << ", ";
        }
        cout << "\b\b." << endl;
    }
    fclose(file);
}

void avg_cout()
{
    Student student;
    FILE* file;
    fopen_s(&file, FILE_PATH, "rb");
    while (fread(&student, sizeof(Student), 1, file))
    {
        cout << student.name << " | " << student.group << " | " << student.AVG() << endl;
    }
    fclose(file);
}

Student get_student_by_index(int index)
{
    FILE* file;
    Student student;
    if (errno_t err_n = fopen_s(&file, FILE_PATH, "rb"))
    {
        cout << "Not found file!" << endl;
        return student;
    }
    fseek(file, sizeof(student) * index, SEEK_SET);
    fread(&student, sizeof(Student), 1, file);
    fclose(file);
    return(student);
}

void set_student_by_index(int index, Student student)
{
    FILE* file;
    if (errno_t err_n = fopen_s(&file, FILE_PATH, "r+b"))
    {
        cout << "Not found file!" << endl;
        return;
    }
    fseek(file, sizeof(Student) * index, SEEK_SET);
    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
}

struct Car
{
    string model, brend, number;
    int year_of_vipusk, probig;
    float obem_engine;
};

int main() {
    srand(time(NULL));
    FILE* file;
    Student student;
    while (true)
    {
        cout << "MENU:\n1)Add student\n2)Output students list\n3)Output students + AVG student\n4)New grade\n0)Exit\nACTION: ";
        int action;
        cin >> action;
        system("cls");
        if (action == 0)
        {
            break;
        }
        else if (action == 1)
        {
            if (errno_t err_n = fopen_s(&file, FILE_PATH, "ab"))
            {
                cout << "Not found file!" << endl;
                return err_n;
            }
            Student student = f_student();
            fwrite(&student, sizeof(Student), 1, file);
            fclose(file);
        }
        else if (action == 2)
        {
            if (errno_t err_n = fopen_s(&file, FILE_PATH, "rb"))
            {
                cout << "Not found file!" << endl;
                return err_n;
            }
            cout << "Student in file" << endl;
            vivod();
        }
        else if (action == 3)
        {
            avg_cout();
        }
        else if (action == 4)
        {
            vivod();
            cout << "Change student";
            int student_index;
            cin >> student_index;
            student_index--;
            student = get_student_by_index(student_index);
            cout << "Name: " << student.name << endl << "New grades: " << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Input " << i + 1 << "`st grade: ";
                cin >> student.grades[i];
            }
            set_student_by_index(student_index, student);
            vivod();
        }
        else
            cout << "ERROR!";
    }


    return 0;
}