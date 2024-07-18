// Magic Number program: 1st improvement

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic; // magic number
	int guess; // user's guess

	magic = rand(); // get a random number

	cout << "Enter your guess: ";
	cin >> guess;

	if (guess == magic) cout << "** Right **" << "\n";
	else cout << "...Sorry, you're wrong." << "\n";
	// Indicate a wrong answer, too.

	system("pause");
	return 0;
}