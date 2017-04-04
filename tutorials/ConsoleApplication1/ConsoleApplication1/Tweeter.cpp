#include "stdafx.h"
#include "Tweeter.h"
#include<iostream>

using namespace std;

Tweeter::Tweeter(string first, string last,
	int arbitrary, string handle) : Person(first, last, arbitrary),
	twitterhandle(handle)
{
}


Tweeter::~Tweeter()
{
}

std::string Tweeter::GetName() const
{
	// Cannot be accessed as private to Person
	//return firstname + " " + lastname + twitterhandle;
	return Person::GetName() + " " + twitterhandle;
}