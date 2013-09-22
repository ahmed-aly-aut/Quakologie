#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "GummiEnte.h"

void GummiEnte::quaken() {
	cout << "Quietsch" << endl;
	benachrichtigeBeobachtende();
}

void GummiEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}

void GummiEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}

string GummiEnte::toString() {
	return "GummiEnte";
}
