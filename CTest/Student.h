#pragma once
#include <string>
using std::string;

class Student
{
public:
	Student();
	~Student();
private:
	string name = NULL;
	int totalCredits = { 0 };
	int currentCredits = { 0 };
	
};