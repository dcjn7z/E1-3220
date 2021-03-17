#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(std::string name, std::string str1, double salary):Employee(name,str1, "Part Time",salary)
{
	std::cout << "Part Time Employee Parameterized Constructor" << std::endl;
	
}

PartTimeEmployee::PartTimeEmployee(PartTimeEmployee const& partTime)
{
	Employee(partTime.get_name(), partTime.get_lastname(),"Part Time", partTime.getSalary());
	std::cout << "Part Time Employee Copy Constructor" << std::endl;
}

PartTimeEmployee::~PartTimeEmployee(){std::cout << "Part Time Employee Destructor" << std::endl;}