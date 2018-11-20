#include <iostream>
#include "Class.h"
#include "Student.h"

using std::cout;
using std::endl;


int main(void) {
	Class::PopulateClassList();

	for (Class c : ClassList)
	{
		cout << "GUID: " << c.getGUID << " ClassID" << c.getClassID << "Title: " << c.getTitle << endl;
	}
}