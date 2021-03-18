#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

#include "Employee.h"

class Company
{
private:
    std::vector<Employee> employees;

public:
    Company();
    std::vector<Employee> get_employeeVector();
    void set_employeeVector(std::vector<Employee>);
    double calculateAverageSalary(double);
    double companyEmployeeCost();
    void addEmployee(Employee *);
    void printEmployees();
};