#include <QCoreApplication>
#include <iostream>
#include <QList>
#include <QString>
#include <QVector>
#include <registry.h>
#include <company1.h>
#include <company2.h>
#include <company3.h>
void printByType(company::typeCompany companyType)
{
    registry& Registry= registry::instance();
    company* ptrCompany = nullptr;
    for(int i = 0,size = Registry.getSize(); i<size;i++)
    {
        ptrCompany=Registry.getCompany(i);
    if(ptrCompany->getType()==companyType)
    {
        std::cout<<"Company name:"<<ptrCompany->getName().toStdString()<<std::endl;
        QList<QString> Owners=ptrCompany->getOwners();
        while(!Owners.isEmpty())
        {  std::cout << Owners.front().toStdString() << ", ";
                           Owners.pop_front();
        }
        std::cout<<"income:"<<ptrCompany->getIncome()<<std::endl;
        std::cout<<"area:"<<ptrCompany->getArea()<<std::endl;
        std::cout<<"employees number:"<<ptrCompany->getNumber()<<std::endl;
    }
    }
}
void printByOwner(QString owner)
{
registry& companiesRegister = registry::instance();
company* company = nullptr;
int size = companiesRegister.getSize();

std::cout << owner.toStdString() << " owners: ";
for(int i = 0; i < size; i++)
{
company = companiesRegister.getCompany(i);
if(company->getOwners().contains(owner))
{
std::cout << company->getName().toStdString() << ", ";
}
}
std::cout << std::endl;
}

void printAverageCounts()
{
registry& Registry= registry::instance();
company* ptrCompany = nullptr;
int size=Registry.getSize();
int companiesCount[3] = {0, 0, 0};
double incomeCount[3] = {0, 0, 0};
double areaCount[3] = {0, 0, 0};
double taxCount[3] = {0, 0, 0};
double empCount[3] = {0, 0, 0};
for(int i = 0;i<size;i++)
{
    ptrCompany=Registry.getCompany(i);
    companiesCount[ptrCompany->getType()]++;
    incomeCount[ptrCompany->getType()]+=ptrCompany->getIncome();
    areaCount[ptrCompany->getType()]+=ptrCompany->getArea();
    taxCount[ptrCompany->getType()]+=ptrCompany->getTax();
    empCount[ptrCompany->getType()]+=ptrCompany->getNumber();
}
std::cout<<"average for type 1: "<<std::endl;
std::cout<<"income : "<<incomeCount[company::type1]/companiesCount[company::type1]<<std::endl;
std::cout<<"area : "<<areaCount[company::type1]/companiesCount[company::type1]<<std::endl;
std::cout<<"tax : "<<taxCount[company::type1]/companiesCount[company::type1]<<std::endl;
std::cout<<"emp number : "<<empCount[company::type1]/companiesCount[company::type1]<<std::endl;

std::cout<<"average for type 2: "<<std::endl;
std::cout<<"income : "<<incomeCount[company::type2]/companiesCount[company::type2]<<std::endl;
std::cout<<"area : "<<areaCount[company::type2]/companiesCount[company::type2]<<std::endl;
std::cout<<"tax : "<<taxCount[company::type2]/companiesCount[company::type2]<<std::endl;
std::cout<<"emp number : "<<empCount[company::type2]/companiesCount[company::type2]<<std::endl;

std::cout<<"average for type 3: "<<std::endl;
std::cout<<"income : "<<incomeCount[company::type3]/companiesCount[company::type3]<<std::endl;
std::cout<<"area : "<<areaCount[company::type3]/companiesCount[company::type3]<<std::endl;
std::cout<<"tax : "<<taxCount[company::type3]/companiesCount[company::type3]<<std::endl;
std::cout<<"emp number : "<<empCount[company::type3]/companiesCount[company::type3]<<std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    registry& Registry= registry::instance();
    QList<QString> companyOwners1;
    QList<QString> companyOwners2;
    QList<QString> companyOwners3;
    QList<QString> companyOwners4;
    companyOwners1.push_back("owner11");
    companyOwners1.push_back("owner12");
    companyOwners1.push_back("coolOwner");

    companyOwners2.push_back("owner21");
    companyOwners2.push_back("owner22");
    companyOwners2.push_back("coolOwner");

    companyOwners3.push_back("owner31");
    companyOwners3.push_back("owner32");
    companyOwners3.push_back("coolOwner");

    companyOwners4.push_back("owner41");
    companyOwners4.push_back("owner42");
    companyOwners4.push_back("owner43");
    companyOwners4.push_back("coolOwner");

    Registry.addCompany(new company1(QString("comp1"),companyOwners1,666.666,444.444,12));
    Registry.addCompany(new company2(QString("comp2"),companyOwners2,555.555,333.333,15));
    Registry.addCompany(new company3(QString("comp3"),companyOwners3,144.28,645.32,85));
    Registry.addCompany(new company1(QString("comp4"),companyOwners4,845.12,900.12,24));

    printByType(company::type1);
    printAverageCounts();
    printByOwner("owner11");

    //company1 qwe;
    return 0;
}
