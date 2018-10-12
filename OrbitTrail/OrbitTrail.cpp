#include "pch.h"
#include "Person.h"
#include "Crew.h"
#include "GeneralStore.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
	Crew crew;
	GeneralStore gs;

	cout << "****************************************" << endl;
	cout << "*        Welcome to Orbit Trail!       *" << endl;
	cout << "****************************************" << endl;
	
	// Display these in the future
	cout << "Right now in a galaxy you currently reside in...\n\nThe sun has sustained life on Earth for thousands of years.\nIt is in the process of becoming a raging supergiant on\nthe brink of supernova. Citizens of Earth are encouraged \nto evacuate by any means possible. You and your shipmates\nhave decided the best means of survival would be to\nget to the Alpha Centauri star system" << endl;
	cout << "...before it's too late." << endl;

	system("pause");

	// Gets the player's name
	string playerName;
	cout << "What is your name?" << endl;
	cin >> playerName;
	crew.addMember(playerName);

	// Gets the crews' names
	string crew1, crew2, crew3, crew4;
	cout << "Enter the name of your smartest crew member: ";
	cin >> crew1;
	cout << endl;
	crew.addMember(crew1);

	cout << "Enter the name of your strongest crew member: ";
	cin >> crew2;
	cout << endl;
	crew.addMember(crew2);

	cout << "Enter the name of your hungriest crew member: ";
	cin >> crew3;
	cout << endl;
	crew.addMember(crew3);

	cout << "Enter the name of the fool of the group: ";
	cin >> crew4;
	cout << endl;
	crew.addMember(crew4);

	crew.listCrew();
}