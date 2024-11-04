#include <iostream>

using namespace std;


bool isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}


int daysDifference(int year1, int month1, int day1, int year2, int month2, int day2) {
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int totalDays1 = 0, totalDays2 = 0;

    for (int i = 1; i < year1; i++) {
        totalDays1 += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 0; i < month1 - 1; i++) {
        totalDays1 += daysInMonth[i];
    }
    if (month1 > 2 && isLeapYear(year1)) {
        totalDays1++;
    }
    totalDays1 += day1;


    for (int i = 1; i < year2; i++) {
        totalDays2 += isLeapYear(i) ? 366 : 365;
    }
    for (int i = 0; i < month2 - 1; i++) {
        totalDays2 += daysInMonth[i];
    }
    if (month2 > 2 && isLeapYear(year2)) {
        totalDays2++;
    }
    totalDays2 += day2;

    return totalDays2 - totalDays1;
}

int main() {
    int year1, month1, day1, year2, month2, day2;

    cout << "Введите первую дату (гггг мм дд): ";
    cin >> year1 >> month1 >> day1;

    cout << "Введите вторую дату (гггг мм дд): ";
    cin >> year2 >> month2 >> day2;

    cout << "Разница между датами: " << daysDifference(year1, month1, day1, year2, month2, day2) << " дней" << endl;

    return 0;
}
