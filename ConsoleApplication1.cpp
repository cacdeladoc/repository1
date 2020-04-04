
#pragma once
​
class Date {
private:
    int year;
    int month;
    int day;
public:
    Date() {}
    Date(int day, int month, int year)
    {
        SetDay(day);
        SetMonth(month);
        SetYear(year);
    }
    void SetYear(int year)
    {
        if (year < 0) {
            throw - 1;
        }
        else {
            this->year = year;
        }
    }
    void SetMonth(int month)
    {
        if (month <= 0 || month > 12) {
            throw - 1;
        }
        else {
            this->month = month;
        }
    }
    void SetDay(int day)
    {
        if (day <= 0 || day > 31) {
            throw - 1;
        }
        else {
            this->day = day;
        }
    }
    int GetYear()
    {
        return year;
    }
    int GetMonth()
    {
        return month;
    }
    int GetDay()
    {
        return day;
    }
};
Colla