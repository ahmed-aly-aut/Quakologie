#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "GansAdapter.h"
/*
 * Diese funktion lässt eine Gans schnattern und benachrichtigt die Observer
 */
void GansAdapter::quaken() {
	gans->schnattern();
	benachrichtigeBeobachtende();
}
/*
 * Diese Funktion registiert die Gans bei dem Observer
 */
void GansAdapter::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}
/*
 * Diese Funktion benachrichtigt die Observer
 */
void GansAdapter::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}
/*
 * to String methode
 * gibt Gans zurück
 */
string GansAdapter::toString() {
	return gans->toString();
}
