#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <iostream>

using namespace std;
class Time{

private:
    int hour;
    int minute;
    int second;

public:
    Time();
    Time(int, int, int);

    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    int getHour();
    int getMinute();
    int getSecond();

    Time operator+(Time);
    void print();

};

#include "time.tpp"
#endif // TIME_H_INCLUDED
