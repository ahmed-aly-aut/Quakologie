#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MoorEnte.h"
/*
 * Diese funktion gibt kwaak aus und benachrichtigt den Observer
 */
void MoorEnte::quaken() {
	cout << "Kwaak" << endl;
	benachrichtigeBeobachtende();
}
/*
 * Registrierung der Moorente beim Observer
 */
void MoorEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}
/*
 * Benachrichtigung des observers
 */
void MoorEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}
/*
 *
 */
string MoorEnte::toString() {
	return "MoorEnte";
}
