#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "EntenSimulator.h"

using namespace std;
/*
 * Diese funktion bringt eine Ente zum quaken
 */
void simulieren(Quakfaehig* ente) {
	ente->quaken();
}
/*
 * Main Funktion zum starten der Funktionalität.
 * Hinzufügen der Enten und zählen der Quake
 */
int main(void) {
	AbstraktEntenFabrik* entenFabrik(new ZaehlendeEntenFabrik());
	Quakfaehig* stockEnte = entenFabrik->erzeugeStockEnte();
	Quakfaehig* moorEnte = entenFabrik->erzeugeMoorEnte();
	Quakfaehig* lockPfeife = entenFabrik->erzeugeLockPfeife();
	Quakfaehig* gummiEnte = entenFabrik->erzeugeGummiEnte();
	Quakfaehig* gansEnte = new GansAdapter(new Gans());

	cout << "\nEntensimulator: mit Composite in Scharen" << endl;

	Schar* entenSchar(new Schar());
	entenSchar->hinzufuegen(stockEnte);
	entenSchar->hinzufuegen(moorEnte);
	entenSchar->hinzufuegen(lockPfeife);
	entenSchar->hinzufuegen(gummiEnte);
	entenSchar->hinzufuegen(gansEnte);

	Schar* stockEntenSchar(new Schar());

	Quakfaehig* stockEnte1 = entenFabrik->erzeugeStockEnte();
	Quakfaehig* stockEnte2 = entenFabrik->erzeugeStockEnte();
	Quakfaehig* stockEnte3 = entenFabrik->erzeugeStockEnte();
	Quakfaehig* stockEnte4 = entenFabrik->erzeugeStockEnte();

	stockEntenSchar->hinzufuegen(stockEnte1);
	stockEntenSchar->hinzufuegen(stockEnte2);
	stockEntenSchar->hinzufuegen(stockEnte3);
	stockEntenSchar->hinzufuegen(stockEnte4);

	entenSchar->hinzufuegen(stockEntenSchar);

	cout << "\nEntensimulator: mit Observer" << endl;
	Quakologe* quakologe = new Quakologe();
	entenSchar->registriereBeobachter(quakologe);

	cout << "\nEntensimulator: Simulation der gesamten Entenschar" << endl;
	simulieren(entenSchar);

	cout << "\nEntensimulator: Simulation der Stockentenschar" << endl;
	simulieren(stockEntenSchar);

	cout << "Die Enten haben " << QuakZaehler::getQuaks() << "-mal gequakt."
			<< endl;
	return 0;
}

