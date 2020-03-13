#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

using namespace std;

class studentInfo
{
private:
    int id;
    string name;
    double cgpa;

public:
    studentInfo();
    studentInfo(int,string,double);

    int getId();
    string getName();
    double getCgpa();
    void print();
};

#include "studentinfo.tpp"
#endif // STUDENTINFO_H_INCLUDED
