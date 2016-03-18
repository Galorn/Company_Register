#ifndef BRANCHES_H_INCLUDED
#define BRANCHES_H_INCLUDED

#include <iostream>
#include <string>

class Branches
{
public:
    Branches(int number, std::string address, employee Manager);
    Branches()
    ~Branches();
    void changeManage(std::string name);
    void deleteBranches(int branchID);

private:
    int m_id;
    std::string m_address;
    employee m_manager;
};

#endif // BRANCHES_H_INCLUDED
