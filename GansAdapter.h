#ifndef GANS_ADAPTER_H
#define GANS_ADAPTER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
#include "Gans.h"
#include "Beobachter.h"
#include "Quakfaehig.h"

using namespace std;

class GansAdapter: public Quakfaehig {
private:
	SenderRing* senderRing;

protected:
	Gans* gans;

public:
	explicit GansAdapter(Gans* gans) :
			senderRing(new SenderRing(this)), gans(gans) {
	}

	void quaken();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

};
#endif
