#include "company2.h"

company2::company2(QString name, QList<QString> &owners, double income,double area, int empNumber):company(name,owners,income,area,empNumber)
{

}
double company2::getTax()
{
    return (area_+empNumber_)/income_;
}

company2::typeCompany company2::getType()
{
    return typeCompany::type2;
}
