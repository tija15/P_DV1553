#pragma once
#define EMPLOYEEREGISTER_H
#include "Employee.h"

class EmployeeRegister {
private:
	int capacity;
	int nrOfEmployees;

	Employee**employees;
	void Expand();
public:
	EmployeeRegister(int capacity = 2);
	~EmployeeRegister();

	void addEmployee(std::string const name, std::string IdNr, std::string competence, std::string currentJob);
	int GetNrOfEmployees()const;
	void ShowAllEmployees();
	int Find(std::string IdNr);
};
