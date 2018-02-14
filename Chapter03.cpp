/*Joey Reidell
2/7/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>
using namespace std;

int rollDice() {
	int die;
	//Rolling a six sided dice 
	die = rand() % 6 + 1;

	return die;
}



int main() {
	srand((int)time(NULL));
	double rolls;
	int  retry;
	int die1, die2;
	int sum;
	int two = 0, three = 0, four = 0,
		five = 0, six = 0, seven = 0,
		eight = 0, nine = 0, ten = 0,
		elev = 0, twel = 0;

	cout << "This program rolls two dice and tabulates the results.\n" << endl;
	do {
		//Asks user for number of rolls
		cout << "Please enter the number of rolls you want: ";
		cin >> rolls;

		for (int i = 0; i < rolls; i++)
		{
			//Loops and adds up the sum of the 2 dice
			die1 = rollDice();
			die2 = rollDice();
			sum = die1 + die2;

			switch (sum)
			{
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			case 9:
				nine++;
				break;
			case 10:
				ten++;
				break;
			case 11:
				elev++;
				break;
			case 12:
				twel++;
				break;

			}

		}
		//Figure out the odds of the 11 numbers
		double possibleOutcomes = 36;
		double odd1 = (rolls / possibleOutcomes) * 1, odd2 = (rolls / possibleOutcomes) * 2, odd3 = (rolls / possibleOutcomes) * 3, 
			odd4 = (rolls / possibleOutcomes) * 4, odd5 = (rolls / possibleOutcomes) * 5, odd6 = (rolls / possibleOutcomes) * 6;
		//Display the table 
		cout << setw(0) << "Sum" << setw(11) << "#Rolled" << setw(12) << "Odds" << setw(12) << "%Error"
			<< endl << std::showpoint << setprecision(4) << fixed;
		//TWO
			cout << setw(0) << "2:" << setw(12) << two << setw(12) << (int)odd1 << setw(12) << abs((((double)two - odd1) / abs(odd1)) * 100)
				<< endl;
		
		//THREE
			cout << setw(0) << "3:" << setw(12) << three << setw(12) << (int)odd2 << setw(12) << abs((((double)three - odd2) / abs(odd2)) * 100)
				<< endl;
		
		//FOUR
			cout << setw(0) << "4:" << setw(12) << four << setw(12) << (int)odd3 << setw(12) << abs((((double)four - odd3) / abs(odd3)) * 100)
				<< endl;

		//FIVE
			cout << setw(0) << "5:" << setw(12) << five << setw(12) << (int)odd4 << setw(12) << abs((((double)five - odd4) / abs(odd4)) * 100)
				<< endl;
		
		//SIX
			cout << setw(0) << "6:" << setw(12) << six << setw(12) << (int)odd5 << setw(12) << abs((((double)six - odd5) / abs(odd5)) * 100)
				<< endl;
		
		
		//SEVEN
			cout << setw(0) << "7:" << setw(12) << seven << setw(12) << (int)odd6 << setw(12) << abs((((double)seven - odd6) / abs(odd6)) * 100)
				<< endl;
		
		//EIGHT
			cout << setw(0) << "8:" << setw(12) << eight << setw(12) << (int)odd5 << setw(12) << abs((((double)eight - odd5) / abs(odd5)) * 100)
				<< endl;
		
		
		//NINE
			cout << setw(0) << "9:" << setw(12) << nine << setw(12) << (int)odd4 << setw(12) << abs((((double)nine - odd4) / abs(odd4)) * 100)
				<< endl;
		
		
		//TEN
			cout << setw(0) << "10:" << setw(11) << ten << setw(12) << (int)odd3 << setw(12) << abs((((double)ten - odd3) / abs(odd3)) * 100)
				<< endl;
		
		//ELEVEN
			cout << setw(0) << "11:" << setw(11) << elev << setw(12) << (int)odd2 << setw(12) << abs((((double)elev - odd2) / abs(odd2)) * 100)
				<< endl;
		
		//TWELVE
			cout << setw(0) << "12:" << setw(11) << twel << setw(12) << (int)odd1 << setw(12) << abs((((double)twel - odd1) / abs(odd1)) * 100)
				<< endl;
		
		
		//Reset the counters
		two = 0, three = 0, four = 0, five = 0, six = 0;
		seven = 0, eight = 0, nine = 0, ten = 0, elev = 0;
		twel = 0;

		cout << "Try again? (1 = Yes, 0 = Exit)" << endl;
		cin >> retry;
	} while (retry == 1);

	system("pause");

	return 0;
}

