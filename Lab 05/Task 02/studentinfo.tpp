#include "studentinfo.h"

studentInfo::studentInfo()
{


}

studentInfo::studentInfo(int id,string name,double cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;

}

int studentInfo::getId()
{
    return id;
}

string studentInfo::getName()
{
    return name;

}

double studentInfo::getCgpa()
{
    return cgpa;
}

void studentInfo::print()
{

            cout<<"Name: "<<name<<endl;
            cout<<"Id: "<<id<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
            cout<<endl;

}
