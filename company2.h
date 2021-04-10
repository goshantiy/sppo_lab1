#ifndef COMPANY2_H
#define COMPANY2_H
#include <company.h>

class company2:public company
{
public:
    company2();
    company2(QString name, QList<QString> &owners, double income, double area, int empNumber);
    double getTax() override;
    typeCompany getType() override;
    ~company2()
    {
        qDebug()<<"~company2";
    }
};


#endif // COMPANY2_H
