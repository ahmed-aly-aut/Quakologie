#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Schar.h"

Schar::Schar() {

}

void Schar::hinzufuegen(Quakfaehig* ente) {
	ar.push_back(ente);
}

void Schar::quaken() {
	std::vector<Quakfaehig*>::iterator iterator = ar.begin();
	for (; ar.end() != iterator; ++iterator) {
		Quakfaehig* quaker = *iterator;
		quaker->quaken();
	}
}

void Schar::registriereBeobachter(Beobachter* beobachter) {
	std::vector<Quakfaehig*>::iterator iterator = ar.begin();
	for (; ar.end() != iterator; ++iterator) {
		Quakfaehig* quaker = *iterator;
		quaker->registriereBeobachter(beobachter);
	}
}

void Schar::benachrichtigeBeobachtende() {
}

string Schar::toString() {
	return "Entenschar";
}
