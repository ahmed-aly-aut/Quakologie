#ifndef GUMMI_ENTE_H
#define GUMMI_ENTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
#include "Beobachter.h"
#include "Quakfaehig.h"

using namespace std;

class GummiEnte: public Quakfaehig {
private:
	SenderRing* senderRing;

public:
	GummiEnte() :
			senderRing(new SenderRing(this)) {
	}

	void quaken();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

};
#endif
