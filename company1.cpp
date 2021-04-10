#include "company1.h"
company1::company1(){};
company1::company1(QString name, QList<QString> &owners, double income,double area, int empNumber):company(name,owners,income,area,empNumber)
{

}
double company1::getTax()
{
    return income_/area_;
}

company1::typeCompany company1::getType()
{
    return typeCompany::type1;
}

