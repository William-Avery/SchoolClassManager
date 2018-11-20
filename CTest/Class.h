#pragma once
#include "CreditType.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Class
{
public:
	Class(int _classID, string _title, CreditType _subject, int _value, string _desc);
	~Class();
	static void PopulateClassList();
	
	int getGUID() { return GUID; }
	int getClassID() { return ClassID; }
	void setClassID(int _ClassID);

	int getCreditCount() { return CreditCount; }
	void setCreditCount(int _CreditCount);

	CreditType getSubject() { return Subject; }
	string getTitle() { return Title; }
	string getDescription() { return Description; }
private:
	int GUID = { 0 };
	int ClassID = { 0 };
	int CreditCount = { 0 };
	CreditType Subject = CreditType::None;
	string Title = NULL;
	string Description = NULL;
};

// List of All Classes
static vector<Class> ClassList;

