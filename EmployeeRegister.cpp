#include "EmployeeRegister.h"
#include <iostream>

void EmployeeRegister::Expand()
{
	capacity = capacity + 2;
	Employee** temp = new Employee*[capacity];
	for (int i = 0; i<nrOfEmployees; i++) {
		temp[i] = employees[i];
	}
	delete[]employees;
	employees = temp;
}

EmployeeRegister::EmployeeRegister(int capacity)
{
	int count = 0;
	int nrOfEmployees = 0;
	employees = new Employee*[capacity];
}

EmployeeRegister::~EmployeeRegister()
{
	for (int i = 0; i<nrOfEmployees; i++) {
		delete employees[i];
	}
	delete[]employees;
}

void EmployeeRegister::addEmployee(std::string const name, std::string IdNr, std::string competence, std::string currentJob)
{
	if (nrOfEmployees == capacity) {
		Expand();
	}
	employees[nrOfEmployees++] = new Employee(name,IdNr,competence,currentJob);
}

int EmployeeRegister::GetNrOfEmployees() const
{
	return nrOfEmployees;
}

void EmployeeRegister::ShowAllEmployees()
{
	for (int i = 0; i<nrOfEmployees; i++) {
		std::cout << employees[i]->ToString() << std::endl;
	}
}

int EmployeeRegister::Find(std::string IdNr)
{
	int index = -1;
	for (int i = 0; i < nrOfEmployees; i++) {
		if (IdNr == employees[i]->GetEmployeeIdNr()) {
			index = i;
			i = nrOfEmployees;
		}
	}
	return index;
}
