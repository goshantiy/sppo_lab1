#include "registry.h"

registry::registry()
{
}
registry& registry::instance()
{
    static registry Reg;
    return Reg;
}
void registry::addCompany(company Company)
{
    companies_.push_front(Company);
}
void registry::delCompany(company Company)
{
    companies_.removeOne(Company);
}
int registry::getSize()
{
    return companies_.size();
}
company& registry::getCompany(int ix)
{
    return companies_[ix];
}
