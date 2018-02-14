
/*Joey Reidell
  1/31/15
  CIT 245-Data Structures and Programming C++*/

#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
	
	double input, guess, lastGuess, result;
	

	// Asks the user for a number to square root
	cout << "Enter a number and I will apply the Babylonian square root algorithm\n";
	cout << "until I am withing .001 of the correct answer.\n";
	cin >> input;

	guess = (double)input / 2;
	lastGuess = 0;

	// loop is used to get the number to as close to .001 of the answer as possible
	while(!(abs(lastGuess - guess) < abs(guess * 0.001)))
	{   
		lastGuess = guess;
		result = (double)input / guess;
		guess = (double)(guess + result) / 2;
		cout << "guessing " << guess << "\n";
	}
	
	// displays the outcome after you back out of the loop
    cout << "The Babylons algorithm gives " << guess << "\n";
	cout << "Checking: " << guess << " * " << guess << " = " << (guess * guess) << "\n";
	system("pause");
	return 0;

}


