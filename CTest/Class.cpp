#include "Class.h"
#include <stdexcept>

using std::invalid_argument;

Class::Class(int _classID, string _title, CreditType _subject, int _CreditCount, string _desc)
{
	GUID = ClassList.size() + 1;
	ClassID = _classID;
	Subject = _subject;
	CreditCount = _CreditCount;
	Title = _title;
	Description = _desc;
}

Class::~Class()
{
}

void Class::PopulateClassList()
{
	ClassList.push_back(Class(1121, "College Math", CreditType::Math, 3, "Basics in math with college level stuff"));
	ClassList.push_back(Class(1122, "College Math II", CreditType::Math, 4, "Advanced math with college level stuff"));
	ClassList.push_back(Class(2001, "English I", CreditType::English, 4, "Basic English Course"));
}

void Class::setClassID(int _ClassID)
{
	if (_ClassID == NULL || _ClassID < 0) {
		throw invalid_argument("(_ClassID) Value received was not valid");
	}
	else {
		ClassID = _ClassID;
	}
}
