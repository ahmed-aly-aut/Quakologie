#ifndef STOCK_ENTE_H
#define STOCK_ENTE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
#include "Beobachter.h"
#include "Quakfaehig.h"

using namespace std;

class StockEnte: public Quakfaehig {
private:
	SenderRing* senderRing;

public:
	StockEnte() :
			senderRing(new SenderRing(this)) {
	}

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	void quaken();

	string toString();

};
#endif
