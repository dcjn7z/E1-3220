#include "Employee.h"
#include "Company.h"
#include "PartTimeEmployee.h"
#include "FullTimeEmployee.h"

using namespace std;

int main() 
{
	Company watermelon;
	watermelon.addEmployee(new FullTimeEmployee("Jack", 30000));
	watermelon.addEmployee(new PartTimeEmployee("Alice", 45000));
	watermelon.printEmployees();
	try
	{
		cout << "Average:" << watermelon.calculateAverageSalary(100) << endl;
	}
	catch(const char *ex) 
	{
		cerr << "Exception: " << ex << endl;
	}
	try
	{
		cout << "Average:" << watermelon.calculateAverageSalary(25000) << endl;
	}
	catch(const char *ex) 
	{
		cerr << "Exception: " << ex << endl;
	}
	cout << "Company costs:" << watermelon.companyEmployeeCost() << endl;
	Company macrosoft;
	macrosoft.addEmployee(new FullTimeEmployee("John", 20000));
	macrosoft.addEmployee(new PartTimeEmployee("Jane", 15000));
	macrosoft.addEmployee(new PartTimeEmployee("Stewie", 18000));
	macrosoft.addEmployee(new PartTimeEmployee("Loise", 35000));
	macrosoft.printEmployees();
	try
	{
		cout << "Average:" << macrosoft.calculateAverageSalary(15000) << endl;
	}
	catch(const char *ex) 
	{
		cerr << "Exception: " << ex << endl;
	}
	try
	{
		cout << "Average:" << macrosoft.calculateAverageSalary(30000) << endl;
	}
	catch(const char *ex) 
	{
		cerr << "Exception: " << ex << endl;
	}
	cout << "Company costs:" << macrosoft.companyEmployeeCost() << endl;
	return EXIT_SUCCESS;
}