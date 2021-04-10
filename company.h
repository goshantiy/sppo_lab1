#ifndef COMPANY_H
#define COMPANY_H
#include <QString>
#include <QList>
class company
{

public:
    enum typeCompany
    {
        type1,
        type2,
        type3
    };
    company();
    company(QString name, QList<QString> &owners, double income,double area, int empNumber);
    void setName(QString name);
    void setOwners(QList<QString> &owners);
    void setIncome(double income);
    void setNumber(int empNumber);
    QString getName();
    QList<QString> getOwners();
    double getIncome();
    double getArea();
    int getNumber();
    virtual typeCompany getType()=0;
    virtual double getTax() = 0;
protected:
    QString name_;
    QList<QString> owners_;
    double income_;
    double area_;
    int empNumber_;
};


#endif // COMPANY_H
