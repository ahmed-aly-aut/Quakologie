#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MoorEnte.h"

void MoorEnte::quaken() {
	cout << "Kwaak" << endl;
	benachrichtigeBeobachtende();
}

void MoorEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}

void MoorEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}

string MoorEnte::toString() {
	return "MoorEnte";
}
