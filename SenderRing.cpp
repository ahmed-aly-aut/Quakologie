#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"

void SenderRing::registriereBeobachter(Beobachter* beobachter) {
	this->beobachter.push_back(beobachter);
}

void SenderRing::benachrichtigeBeobachtende() {
	std::vector<Beobachter*>::iterator iterator = this->beobachter.begin();
	while (iterator != this->beobachter.end()) {
		Beobachter* beobachter = *iterator++;
		beobachter->aktualisieren(this->ente);
	}
}

vector<Beobachter*> SenderRing::getBeobachtende() {
	return beobachter;
}
