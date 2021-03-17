#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H
#include "Employee.h"
#include <string>
#include <iostream>
#include <vector>

class FullTimeEmployee: public Employee{
   
    public :
        FullTimeEmployee(std::string name,std::string str1, double salary);
        FullTimeEmployee(FullTimeEmployee const&);
        ~FullTimeEmployee();

};
#endif