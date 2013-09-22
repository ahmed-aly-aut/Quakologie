#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakZaehler.h"

int QuakZaehler::anzahlDerQuaks = 0;
/*
 * Diese Funktion zählt die anzahl an quaken
 */
void QuakZaehler::quaken() {
	ente->quaken();
	anzahlDerQuaks++;
}
/*
 * Diese Funktion gibt die Anzahl der Quaks zurück
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
 * Gibt die Art der Ente zurück
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
