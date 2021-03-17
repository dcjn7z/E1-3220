#include "Employee.h"
Employee::Employee() {std::cout << "Employee Default Constructor" << std::endl;}

Employee::Employee(Employee const& object)
{
	name=object.name;
	lastname_=object.lastname_;
	employmentType=object.employmentType;
	salary=object.salary;
	std::cout << "Employee Copy Constructor" << std::endl;
}

Employee::Employee(std::string str1, std::string str2)
{
	name= str1;
	lastname_= str2;
	employmentType= "";
	salary= "";
	std::cout << "Employee Parameterized Constructor" << std::endl;
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