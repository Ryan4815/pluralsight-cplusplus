#include <string>
#include <iostream>
using namespace std

int main() 
{
	string stringOne;
	string stringTwo;
	bool stop = false;
	
	while(!stop) 
	{
		cout << "Enter two strings!" << endl;
		cout << "Enter string one: " 
		cin >> stringOne;
		cout << "Enter string two: " 
		cin >> stringOne;
		
		if (stringOne.length > stringTwo.length)
		{
			cout << "The first string is longer than the second!" << endl;
		}
		
		if (stringOne.length < stringTwo.length)
		{
			cout << "The second string is longer than the first!" << endl;
		}
		
		if (stringOne.length == stringTwo.length)
		{
			cout << "The two strings are of equal length!" << endl;
		}
		
	}
}
