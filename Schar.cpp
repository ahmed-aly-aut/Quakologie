#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Schar.h"

Schar::Schar() {

}
/*
 * Fügt eine Schar hinzu
 */
void Schar::hinzufuegen(Quakfaehig* ente) {
	ar.push_back(ente);
}
/*
 * lässt eine Schar quaken
 */
void Schar::quaken() {
	std::vector<Quakfaehig*>::iterator iterator = ar.begin();
	for (; ar.end() != iterator; ++iterator) {
		Quakfaehig* quaker = *iterator;
		quaker->quaken();
	}
}
/*
 * Registriert die Schar beim Observer
 */
void Schar::registriereBeobachter(Beobachter* beobachter) {
	std::vector<Quakfaehig*>::iterator iterator = ar.begin();
	for (; ar.end() != iterator; ++iterator) {
		Quakfaehig* quaker = *iterator;
		quaker->registriereBeobachter(beobachter);
	}
}
/*
 * Benachrichtigt den Observer
 */
void Schar::benachrichtigeBeobachtende() {
}
/*
 *
 */
string Schar::toString() {
	return "Entenschar";
}
