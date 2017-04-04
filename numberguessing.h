#include <iostream>
using namespace std

int main() 
{
	int answer = 7;
	bool answerFound = false;
	int guess = 0;
	
	while (!answerFound) 
	{
		cout << "Guess the number!" << endl;
		cout << "Enter a guess: " 
		cin >> guess;
		if (guess == answer) 
		{
			cout << "Congrats, you identified the number!" << endl;
			answerFound = true;
		} 
		else 
		{
			if (guess > answer) 
			{
				cout << "You guessed too high. Try again." << endl;
			} 
			else 
			{
				cout << "You guessed too low. Try again." << endl;
			}
		}

}

