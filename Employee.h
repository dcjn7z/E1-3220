#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <vector>
class Employee{

    protected : 
    std::string name;
    std::string lastname;
    std::string employmentType;
    double salary;

    public :
        Employee(); //Default Constructor
        Employee(Employee const& object);
        Employee(std::string,std::string, std::string, double);
        Employee(std::string,std::string,double);
        std::string get_name() const;
        std::string get_lastname()const;
        std::string get_employmentType() const;
        double getSalary() const;
        void set_name(std::string);
        void set_lastname(std::string);
        void set_employmentType(std::string);
        void set_salary(double);
        void printEmployeeInfo();
        ~Employee();

};
#endif