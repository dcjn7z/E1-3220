#include "Employee.h"
Employee::Employee() {std::cout << "Employee Default Constructor" << std::endl;}

Employee::Employee(Employee const& object)
{
	name=object.name;
	lastname=object.lastname;
	employmentType=object.employmentType;
	salary=object.salary;
	std::cout << "Employee Copy Constructor" << std::endl;
}

Employee::Employee(std::string str1, std::string str2, std::string str3, double sal)
{
	name= str1;
	lastname= str2;
	employmentType= str3;
	salary = sal;
	std::cout << "Employee Parameterized Constructor 1" << std::endl;
}

Employee::Employee(std::string str1, std::string str2, double sal)
{
	name= str1;
	employmentType= str2;
	salary= sal;
	std::cout << "Employee Parameterized Constructor 2" << std::endl;
}
std::string Employee::get_name() const
{
	return this->name;
}

std::string Employee::get_lastname() const
{
	return this->lastname;
}

std::string Employee::get_employmentType() const
{
	return this->employmentType;
}

double Employee::getSalary() const
{
	return this->salary;
}

void Employee::set_name(std::string name)
{
	this->name=name;
}

void Employee::set_lastname(std::string lastname)
{
	this->lastname=lastname;
}

void Employee::set_employmentType(std::string str)
{
	this->employmentType=str;
}

void Employee::set_salary(double salary)
{
	this->salary=salary;
}

void Employee::printEmployeeInfo()
{
	std::cout << "Employee = " << this->name << " " << this->lastname << ", Type of Diet= " << this->employmentType << ", Salary=" << this->salary << std::endl;
}

Employee::~Employee() {std::cout << "Employee Destructor" << std::endl;}