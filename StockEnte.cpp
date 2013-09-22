#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "StockEnte.h"
/*
 * lässt die Stockente quaken und benachrichtigt die Observer
 */
void StockEnte::quaken() {
	cout << "Quak" << std::endl;
	benachrichtigeBeobachtende();
}
/*
 * Registriert die StockEnte beim Observer
 */
void StockEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}
/*
 * Benachrichtig den Observer
 */
void StockEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}
/*
 *
 */
string StockEnte::toString() {
	return "Stockente";
}
