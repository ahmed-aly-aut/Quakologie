#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "GummiEnte.h"
/*
 * Diese Funktion gibt Quietsch aus und benachrichtigt die Observer
 */
void GummiEnte::quaken() {
	cout << "Quietsch" << endl;
	benachrichtigeBeobachtende();
}
/*
 * Diese Funktion registriert die GummiEnte beim Observer
 */
void GummiEnte::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}
/*
 * Diese Funktion benachrichtigt die Observer
 */
void GummiEnte::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}
/*
 * Gibt GummiEnte zurück
 */
string GummiEnte::toString() {
	return "GummiEnte";
}
