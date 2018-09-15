#include "pch.h"
#include "Person.h"
#include "Crew.h"
#include "GeneralStore.h"
#include <iostream>
#include <limits>

using namespace std;

int main() {
	Crew crew;
	GeneralStore gs;

	crew.addMember(Person("John"));
	crew.addMember(Person("Paul"));
	crew.addMember(Person("Ringo"));
	crew.addMember(Person("George"));
	crew.addMember(Person("James"));
	crew.addMember(Person("Jonny"));
	crew.addMember(Person("Jones"));

	crew.subtractAmount(1001);

	cout << "Money: " << crew.getMoney() << endl;

	crew.listCrew();
}