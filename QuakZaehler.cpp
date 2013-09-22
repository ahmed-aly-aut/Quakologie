#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakZaehler.h"

int QuakZaehler::anzahlDerQuaks = 0;

void QuakZaehler::quaken() {
	ente->quaken();
	anzahlDerQuaks++;
}

int QuakZaehler::getQuaks() {
	return anzahlDerQuaks;
}

void QuakZaehler::registriereBeobachter(Beobachter* beobachter) {
	ente->registriereBeobachter(beobachter);
}

void QuakZaehler::benachrichtigeBeobachtende() {
	ente->benachrichtigeBeobachtende();
}

string QuakZaehler::toString() {
	return ente->toString();
}

Quakfaehig* QuakZaehler::getEnte() {
	return ente;
}

void QuakZaehler::setEnte(Quakfaehig* ente) {
	this->ente = ente;
}
