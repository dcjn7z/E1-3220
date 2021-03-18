#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(std::string name, std::string str1, double salary):Employee(name,str1, "Full Time",salary)
{
	std::cout << "Full Time Employee Parameterized Constructor" << std::endl;
	
}

FullTimeEmployee::FullTimeEmployee(std::string name, double salary):Employee(name, "Full Time",salary)
{
	std::cout << "Full Time Employee Parameterized Constructor 2" << std::endl;
	
}

FullTimeEmployee::FullTimeEmployee(FullTimeEmployee const& FullTime)
{
	Employee(FullTime.get_name(), FullTime.get_lastname(),"Full Time", FullTime.getSalary());
	std::cout << "Full Time Employee Copy Constructor" << std::endl;
}

FullTimeEmployee::~FullTimeEmployee(){std::cout << "Full Time Employee Destructor" << std::endl;}