#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H
#include "Employee.h"
#include <string>
#include <iostream>
#include <vector>

class PartTimeEmployee: public Employee{
   
    public :
        PartTimeEmployee(std::string name,std::string str1, double salary);
        PartTimeEmployee(PartTimeEmployee const&);
        ~PartTimeEmployee();

};
#endif