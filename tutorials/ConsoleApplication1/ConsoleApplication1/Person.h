#pragma once
#include <string>

#ifndef _Person_H
#define _Person_H

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	// Constructor
	Person(std::string first,
		std::string last, int arbitrary);

	// Destructor
	virtual ~Person();

	// Functions
	virtual std::string GetName() const;
	// Inline functions
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	void SetFirstName(std::string first) { firstname = first; }
};

#endif // !_Person_H

