#ifndef MOOR_ENTE_H
#define MOOR_ENTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
#include "Beobachter.h"
#include "Quakfaehig.h"

using namespace std;

class MoorEnte: public Quakfaehig {
private:
	SenderRing* senderRing;

public:
	MoorEnte() :
			senderRing(new SenderRing(this)) {
	}

	void quaken();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

};
#endif
