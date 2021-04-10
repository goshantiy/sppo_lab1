#ifndef COMPANY1_H
#define COMPANY1_H
#include <company.h>

class company1:public company
{
public:
    company1();
    company1(QString name, QList<QString> &owners, double income, double area, int empNumber);
    double getTax() override;
    typeCompany getType() override;
    ~company1()
    {
        qDebug()<<"~company1";
    }
};

#endif // COMPANY1_H
