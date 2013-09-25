#ifndef QUAK_ZAEHLER_H
#define QUAK_ZAEHLER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Quakfaehig.h"
#include "Beobachter.h"

using namespace std;

class QuakZaehler: public Quakfaehig {
private:
	static int anzahlDerQuaks;

	Quakfaehig* ente;

public:
	QuakZaehler(Quakfaehig* ente) :
			ente(ente) {
	}

	void quaken();

	static int getQuaks();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

	Quakfaehig* getEnte();

	void setEnte(Quakfaehig* ente);

};
#endif
