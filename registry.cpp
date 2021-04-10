#include "registry.h"

registry::registry()
{
}
registry& registry::instance()
{
    static registry Reg;
    return Reg;
}
void registry::addCompany(company* Companyz)
{
    companies_.push_front(Companyz);
}
void registry::delCompany(company* Companyz)
{
    companies_.removeOne(Companyz);
}
int registry::getSize()
{
    return companies_.size();
}
company* registry::getCompany(int ix)
{
    return companies_[ix];
}
registry::~registry()
{
qDeleteAll(companies_);
   companies_.clear();
}
