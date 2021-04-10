#include "company.h"

company::company(QString name, QList<QString> &owners, double income,double area, int empNumber)
{
name_=name;
owners_=owners;
income_=income;
area_=area;
empNumber_=empNumber;
}
void company::setName(QString name)
{
    name_=name;
}
void company::setOwners(QList<QString> &owners)
{
    owners_=owners;
}
void company::setIncome(double income)
{
    income_=income;
}
void company::setNumber(int empNumber)
{
    empNumber_=empNumber;
}
QString company::getName()
{
    return name_;
}

QList<QString> company::getOwners()
{
    return owners_;
}
double company::getIncome()
{
    return income_;
}
double company::getArea()
{
    return area_;
}
int company::getNumber()
{
    return empNumber_;
}
