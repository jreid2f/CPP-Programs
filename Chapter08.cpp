/*Joey Reidell
2/28/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
// Money class
class Money {
private:
	int dollars;
	int cents;
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;

public:
	Money();
	Money(double amount);
	Money(int theDollars, int theCents);
	Money(int theDollars);
	double getAmount() const;
	int getDollars() const
	{
		return dollars;
	}
	int getCents() const
	{
		return cents;
	}
	void Money::percent() const;
	friend ostream& operator <<(ostream& outputStream,
		const Money& amount);
	friend istream& operator >>(istream& inputStream, Money& amount);
};

const Money operator + (const Money& amount1, const Money& amount2);

const Money operator - (const Money& amount1, const Money& amount2);

bool operator ==(const Money& amount1, const Money& amount2);

bool operator < (const Money& amount1, const Money& amount2);

bool operator > (const Money& amount1, const Money& amount2);

int main()
{
	// declare the users amount and your amount
	Money yourAmount, myAmount(10, 9);
	// asks for user amount
	cout << "Enter an amount of money: ";
	cin >> yourAmount;
	cout << "Your amount is " << yourAmount << endl;
	cout << "My amount is " << myAmount << endl;
	// checks if the amounts are the same
	if (yourAmount == myAmount)
		cout << "We have the same amounts.\n";
	// checks if your amount is greater than my amount
	else if(yourAmount > myAmount) {
		cout << "One of us is richer.\n";
		cout << "You have more money than me.\n";
	}
	// checks if your amount is less than my amount
	else {
		cout << "One of us is richer.\n";
		cout << "You have less money than me.\n";
	}
	// takes your amount and checks for 10% of your amount
	yourAmount.percent();
	// yourAmount + myAmount
	Money ourAmount = yourAmount + myAmount;
	cout << yourAmount << " + " << myAmount
		<< " equals " << ourAmount << endl;
	// yourAmount - myAmount
	Money diffAmount = yourAmount - myAmount;
	cout << yourAmount << " - " << myAmount
		<< " equals " << diffAmount << endl;

	system("pause");
	return 0;
}

const Money operator + (const Money& amount1, const Money& amount2) {
	// overloads the + operator
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	int sumAllCents = allCents1 + allCents2;
	int absAllCents = abs(sumAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;

	if (sumAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}

	return Money(finalDollars, finalCents);
}

const Money operator - (const Money& amount1, const Money& amount2) {
	// overloads the - operator
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	int diffAllCents = allCents1 - allCents2;
	int absAllCents = abs(diffAllCents);
	int finalDollars = absAllCents / 100;
	int finalCents = absAllCents % 100;

	if (diffAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}

	return Money(finalDollars, finalCents);
}

bool operator ==(const Money& amount1, const Money& amount2)
{
	// overloads the == operator
	return ((amount1.getDollars() == amount2.getDollars())
		&& (amount1.getCents() == amount2.getCents()));
}

const Money operator -(const Money& amount)
{
	return Money(-amount.getDollars(), -amount.getCents());
}

bool operator < (const Money& amount1, const Money& amount2) {
	// overloads the < operator
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	if (allCents1 < allCents2)
		return true;
	else
		return false;
}

bool operator > (const Money& amount1, const Money& amount2) {
	// overloads the > operator
	int allCents1 = amount1.getCents() + amount1.getDollars() * 100;
	int allCents2 = amount2.getCents() + amount2.getDollars() * 100;
	if (allCents1 > allCents2)
		return true;
	else
		return false;
}

ostream& operator <<(ostream& outputStream, const Money& amount)
{
	// overloads the << operator
	int absDollars = abs(amount.dollars);
	int absCents = abs(amount.cents);
	if (amount.dollars < 0 || amount.cents < 0)
	{
		outputStream << "$-";
	}
	else
		outputStream << '$';
	outputStream << absDollars;

	if (absCents >= 10)
		outputStream << '.' << absCents;
	else
		outputStream << '.' << '0' << absCents;
	
	return outputStream;
}

istream& operator >>(istream& inputStream, Money& amount)
{
	// overloads the >> operator
	char dollarSign;
	inputStream >> dollarSign;
	if (dollarSign != '$')
	{
		cout << "No dollar sign in Money input.\n";
		system("pause");
		exit(1);
	}

	double amountAsDouble;
	inputStream >> amountAsDouble;
	amount.dollars = amount.dollarsPart(amountAsDouble);
	amount.cents = amount.centsPart(amountAsDouble);
	return inputStream;
	
}

int Money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}

int Money::centsPart(double amount) const
{
	double doubleCents = amount * 100;
	int intCents = (round(fabs(doubleCents))) % 100;
	if (amount < 0)
	{
		intCents = -intCents;
	}
	return intCents;
}

int Money::round(double number) const
{
	return static_cast<int>(floor(number + 0.5));
}
// default constructor
Money::Money() : dollars(0), cents(0)
{}
// second constructot
Money::Money(double amount)
	: dollars(dollarsPart(amount)), cents(centsPart(amount))
{}
// third constructor
Money::Money(int theDollars)
	: dollars(theDollars), cents(0)
{}
// fourth constructor
Money::Money(int theDollars, int theCents)
{
	if ((theDollars < 0 && theCents > 0) ||
		(theDollars > 0 && theCents < 0))
	{
		cout << "Inconsistent money data. \n";
	}
	dollars = theDollars;
	cents = theCents;
}
double Money::getAmount() const
{
	// gets Amount of dollars and cents
	return (dollars + cents*0.01);
}

void Money::percent() const
{
	// displays 10% of the users amount
	double percentFigure = getAmount() / 10;
	cout << "10% of your money is " << std::showpoint << setprecision(2) << fixed 
		<< "$" << percentFigure << endl;

}

