#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "LockPfeife.h"

void LockPfeife::quaken() {
	cout << "Kwaak" << endl;
	benachrichtigeBeobachtende();
}

void LockPfeife::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}

void LockPfeife::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}

string LockPfeife::toString() {
	return "Lockpfeife";
}
