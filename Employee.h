#pragma once
#define EMPLOYEE_H
#include <string>

class Employee {
private:
	std::string name;
	std::string IdNr;
	std::string competence;
	std::string currentJob;
public:
	Employee(std::string name, std::string IdNr, std::string competence,std::string currentJob);
	~Employee();

	void setCurrentJob(std::string currentJob);
	std::string GetEmployeeIdNr() const;
	std::string GetEmployeeName() const;
	std::string GetEmployeeCompetence() const;
	std::string ToString();
};
