#include "Employee.h"
#include <sstream>

Employee::Employee(std::string name, std::string IdNr, std::string competence,std::string currentJob) {
	this->name = name;
	this->IdNr = IdNr;
	this->competence = competence;
	this->currentJob = currentJob;
}

Employee::~Employee() {

}

void Employee::setCurrentJob(std::string currentJob)
{
	this->currentJob = currentJob;
}

std::string Employee::GetEmployeeIdNr() const
{
	return IdNr;
}

std::string Employee::GetEmployeeName() const {
	return name;
}

std::string Employee::GetEmployeeCompetence() const {
	return competence;
}

std::string Employee::ToString() {
	std::stringstream ss;
	ss << "Name: " << name << std::endl;
	ss << "IdNr: " << IdNr << std::endl;
	ss << "Competence: " << competence << std::endl;
	ss<<"Current job: "<< currentJob << std::endl;
}
