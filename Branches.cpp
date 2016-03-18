#include "Branches.h"

using namespace std;

Branches::Branches (number, address, Manager) : m_id, m_address, m_manager (ID, name, firstName, annualSalary, branchID)
{

}

Branches::~Branches()
{

}

void Branches::changeManager(string name)
{
    m_Manager = name;
}

void Branches::deleteBranches(int branchID)
{
    delete Branches(brancheID);
}
1
