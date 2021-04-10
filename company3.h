#ifndef COMPANY3_H
#define COMPANY3_H
#include <company.h>

class company3:public company
{
public:
    company3();
    company3(QString name, QList<QString> &owners, double income, double area, int empNumber);
    double getTax() override;
    typeCompany getType() override;
};


#endif // COMPANY3_H
