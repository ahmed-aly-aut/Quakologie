#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakZaehler.h"

int QuakZaehler::anzahlDerQuaks = 0;
/*
 * Diese Funktion z�hlt die anzahl an quaken
 */
void QuakZaehler::quaken() {
	ente->quaken();
	anzahlDerQuaks++;
}
/*
 * Diese Funktion gibt die Anzahl der Quaks zur�ck
 */
int QuakZaehler::getQuaks() {
	return anzahlDerQuaks;
}
/*
 * Registrierung des Zaehlers beim Observer
 */
void QuakZaehler::registriereBeobachter(Beobachter* beobachter) {
	ente->registriereBeobachter(beobachter);
}
/*
 * Benachrichtigung des Observers
 */
void QuakZaehler::benachrichtigeBeobachtende() {
	ente->benachrichtigeBeobachtende();
}
/*
 *
 */
string QuakZaehler::toString() {
	return ente->toString();
}
/*
 * Gibt die Art der Ente zur�ck
 */
Quakfaehig* QuakZaehler::getEnte() {
	return ente;
}
/*
 * setzt die Ente
 */
void QuakZaehler::setEnte(Quakfaehig* ente) {
	this->ente = ente;
}
