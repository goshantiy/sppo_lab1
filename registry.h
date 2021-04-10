#ifndef REGISTRY_H
#define REGISTRY_H
#include <company.h>


class registry
{
public:
    static registry& instance();
    void addCompany(company* Companyz);
    void delCompany(company* Companyz);
    int getSize();
    company* getCompany(int ix);
protected:
     registry();
     registry(const registry &obj) = delete;
     registry& operator=(const registry &obj) = delete;
     QList<company*> companies_;
};

#endif // REGISTRY_H
