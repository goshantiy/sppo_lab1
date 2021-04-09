#ifndef REGISTRY_H
#define REGISTRY_H
#include <company.h>


class registry
{
public:
    static registry& instance();
    void addCompany();
    void delCompany();
    int getSize();
    company& getCompany(int ix);
private:
     registry();
     registry(const registry &obj) = delete;
     registry& operator=(const registry &obj) = delete;


};

#endif // REGISTRY_H
