#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "LockPfeife.h"
/*
 * Diese Funktion gibt kwaak aus und benachrichtigt den Observer
 */
void LockPfeife::quaken() {
	cout << "Kwaak" << endl;
	benachrichtigeBeobachtende();
}
/*
 * Diese Funktion registiert die Lockpfeife beim Observer
 */
void LockPfeife::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}
/*
 * Diese Funktion benachrichtigt den Observer
 */
void LockPfeife::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}
/*
 *
 */
string LockPfeife::toString() {
	return "Lockpfeife";
}
