#include "Company.h"
Company::Company(){}

std::vector<Employee> Company::get_employeeVector()
{
	return this->employees;
}

void Company::set_employeeVector(std::vector<Employee> employees)
{
	this->employees = employees;
}

double Company::calculateAverageSalary(double salaryThreshold)
{
	double total =0;
	int count = 0;
	std::vector<Employee>::iterator iter;
	for (iter = employees.begin(); iter != employees.end(); iter++)
	{
		if (iter->getSalary() < salaryThreshold)
		{
			total = total + iter->getSalary();
			count++;
		}
	}
	if (count==0)
	{
		throw "Division by zero\n";
	}
	return (total/(double)count);
}

double Company::companyEmployeeCost()
{
	double total =0;
	std::vector<Employee>::iterator iter;
	for (iter = employees.begin(); iter != employees.end(); iter++)
	{
		total = total + iter->getSalary();
	}
	return total;
}

void Company::addEmployee(Employee *e)
{
	employees.push_back(*e);
}

void Company::printEmployees()
{
	std::vector<Employee>::iterator iter;
	for (iter = employees.begin(); iter != employees.end(); iter++)
	{
		iter->printEmployeeInfo();
	}
}