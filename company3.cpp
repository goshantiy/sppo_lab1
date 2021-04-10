#include "company3.h"

company3::company3(QString name, QList<QString> &owners, double income,double area, int empNumber):company(name,owners,income,area,empNumber)
{

}
double company3::getTax()
{
    return area_/empNumber_;
}

company3::typeCompany company3::getType()
{
    return typeCompany::type3;
}
