#include "time.h"

Time::Time(int hour, int minute, int second){

    this->hour = hour;
    this->minute = minute;
    this->second = second;

}

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

int Time::getHour(){
    return hour;
}
int Time::getMinute(){
    return minute;
}
int Time::getSecond(){
    return second;
}

void Time::setHour(int hour){
    this->hour = hour;
}
void Time::setMinute(int minute){
    this->minute = minute;
}
void Time::setSecond(int second){
    this->second = second;
}

Time Time::operator+(Time t){
    Time result;
    result.second = second + t.second;
    if(result.second >=60 ){
        result.minute = (result.second/60);
        result.second -= (result.minute*60);
    }

    result.minute += (minute + t.minute);
    if(result.minute >=60 ){
        result.hour = (result.minute/60);
        result.minute -= (result.hour*60);
    }

    result.hour += (hour+t.hour);

    return result;

}

void Time::print(){
    cout<<hour<<":"<<minute<<":"<<second;
}
