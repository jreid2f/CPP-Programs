/*Joey Reidell
2/14/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
using namespace std;

class Player {

public:
	// sets string name to private variable name
	void setName(string newName) { name = newName; }
	// gets the private variable name
	string getName() { return name; }
	// sets the string password to the private variable password
	void setPassword(string newPassword) { password = newPassword; }
	// gets the private variable password
	string getPassword() { return password; }
	// sets the int number for the private experience variable
	void setExperience(int newExp) { EXP = newExp;; }
	// gets the private variable EXP
	int getExperience() { return EXP; }
	// sets the int number for private x location variable
	void setLocationX(int newX) { locX = newX; }
	// gets the private variable locX
	int getLocationX() { return locX; }
	// sets the int number for private y location variable
	void setLocationY(int newY) { locY = newY; }
	// gets the private variable locY
	int getLocationY() { return locY; }
	// sets the elements in the array to the specific string variable passed to it
	void setInv(string item1, string item2, string item3, string item4)
	{
		inv[0] = item1;
		inv[1] = item2;
		inv[2] = item3;
		inv[3] = item4;
	}
	// gets the strings that was passed into the inv array
	string *getInv() { return inv; }
	// these methods display the variables passed
	void displayName();
	void displayPassword();
	void displayXp();
	void displayX();
	void displayY();
	void displayInv();

private:
	// all private variables used
	string name;
	string password;
	int EXP;
	string inv[4];
	int locX, locY;
};

int main() {

	Player name, password, xp, x,  y, invent, display;
	cout << "This program generates three player objects and displays them.\n" << endl;
	// sets the string as name
	name.setName("Nematocyst");
	// gets the string set as name
	name.getName();
	// sets the string as password
	password.setPassword("obfuscator");
	// gets the string set as password
	password.getPassword();
	// sets the int as XP
	xp.setExperience(1098);
	// gets the int set as EXP
	xp.getExperience();
	// sets the int as X
	x.setLocationX(55689);
	// gets the int set as locX
	x.getLocationX();
	// sets the int as y
	y.setLocationY(76453);
	// gets the int set as locY
	y.getLocationY();
	// sets the strings in the array
	invent.setInv("sword", "shield", "food", "potion");
	// sets what to display on screen
	cout << "Player Info -" << endl;
	name.displayName();
	password.displayPassword();
	xp.displayXp();
	cout << "Inventory:" << endl;
	x.displayX();
	y.displayY();
	invent.displayInv();
	// does the same thing over again 2 more times
	name.setName("Omphaloskeps");
	password.setPassword("obstreperous");
	password.getPassword();
	xp.setExperience(11456);
	xp.getExperience();
	x.setLocationX(12);
	x.getLocationX();
	y.setLocationY(5108);
	y.getLocationY();
	invent.setInv("sword of magic", "shield of power", "mana potion", "anti-fire potion");
	cout << "\nPlayer Info -" << endl;
	name.displayName();
	password.displayPassword();
	xp.displayXp();
	cout << "Inventory:" << endl;
	x.displayX();
	y.displayY();
	invent.displayInv();

	name.setName("Tokamakfusion");
	password.setPassword("toroid");
	password.getPassword();
	xp.setExperience(15678);
	xp.getExperience();
	x.setLocationX(99);
	x.getLocationX();
	y.setLocationY(108);
	y.getLocationY();
	invent.setInv("axe of damage", "shield of warding", "strength potion", "healing potion");
	cout << "\nPlayer Info -" << endl;
	name.displayName();
	password.displayPassword();
	xp.displayXp();
	cout << "Inventory:" << endl;
	x.displayX();
	y.displayY();
	invent.displayInv();
	// ends here
	system("pause");
	return 0;
}
void Player::displayName()
{
	// displays name
	cout << "Name:      " << name << endl;
}
void Player::displayPassword()
{
	// displays password
	cout << "Password:  " << password << endl;
}
void Player::displayXp()
{
	// displays EXP
	cout << "Experience: " << EXP << endl;
}
void Player::displayX()
{
	// displays locX
	cout << "Position: " << locX << ", ";
}
void Player::displayY()
{
	// displays locY
	cout << locY << endl;
}

  void Player::displayInv() {
		 // displays the array inv
	  *getInv();
	for (int i = 0; i < 4; i++)
	{
		cout << " " << inv[i] << endl;
	}
}