#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "StockEnte.h"

void StockEnte::quaken() {
	cout << "Quak" << std::endl;
	benachrichtigeBeobachtende();
}

void StockEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}

void StockEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}

string StockEnte::toString() {
	return "Stockente";
}
