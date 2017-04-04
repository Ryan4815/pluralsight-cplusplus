#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;

// Constructor / Initialiser
Person::Person(string first, string last,
	int arbitrary) : firstname(first), lastname(last),
	arbitrarynumber(arbitrary)
{

}

// Destructor
Person::~Person()
{

}

string Person::GetName() const
{
	return firstname + " " + lastname;
}