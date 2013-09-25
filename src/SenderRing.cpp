#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
/*
 * Registriert beim Observer
 */
void SenderRing::registriereBeobachter(Beobachter* beobachter) {
	this->beobachter.push_back(beobachter);
}
/*
 * Benachrichtigung des Observers
 */
void SenderRing::benachrichtigeBeobachtende() {
	std::vector<Beobachter*>::iterator iterator = this->beobachter.begin();
	while (iterator != this->beobachter.end()) {
		Beobachter* beobachter = *iterator++;
		beobachter->aktualisieren(this->ente);
	}
}
/*
 * Zeigt die aktuellen Observer
 */
vector<Beobachter*> SenderRing::getBeobachtende() {
	return beobachter;
}
