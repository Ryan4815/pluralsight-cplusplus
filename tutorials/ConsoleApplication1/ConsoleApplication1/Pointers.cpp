#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <memory>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// Creating Person and Tweeter objects on the free store
	Person* Ryan = new Person("Ryan", "Wood", 8);
	Tweeter* RyanW = new Tweeter("Ryan", "Wood", 8, "RyanW");

	// Creating a Person pointer that is the same as the tweeter pointer
	Person* pRyanW = RyanW;

	// Now if you called GetName on pRyanW - it would use GetName of Person
	// even though you are pointing at a Tweeter object (due to pointer type).
	// If you want to get the inherited method, make it virtual.
	// e.g. virtual std::string GetName() const;

	cout << Ryan->GetName() << endl;
	cout << RyanW->GetName() << endl;
	cout << pRyanW->GetName() << endl;

	delete RyanW;

	// Can use auto here instead
	shared_ptr<Person> spRyan = make_shared<Person>("Ryan", "Wood", 8);
	cout << spRyan->GetName() << endl;

	// Shared ptr to a Person object that was created on the free store as a Tweeter
	shared_ptr<Person> spRyan2 = make_shared<Tweeter>("Ryan", "Wood", 8, "RyanW");

	Person localP("Local", "Person", 3);
	// Cannot create a tweeter from a copy of person
	//Tweeter localT = localP;

	// Can make a Person by copying from a Tweeter (the twitterhandle is thrown away)
	Tweeter localT2("Local", "Tweeter", 4, "LTweet");
	Person localP2 = localT2;
	// Therefore it used the Person GetName()
	cout << localP2.GetName() << endl;

	// If instead we create a reference from the Tweeter, we can use polymorphism
	// and still use the Tweeter version of GetName
	Person& localPA2 = localT2;
	cout << localPA2.GetName() << endl;

}
