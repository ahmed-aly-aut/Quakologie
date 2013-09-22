#ifndef SENDER_RING_H
#define SENDER_RING_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakBeobachtungsSubjekt.h"
#include "Beobachter.h"

using namespace std;

class SenderRing: public QuakBeobachtungsSubjekt {
private:
	vector<Beobachter*> beobachter;
	QuakBeobachtungsSubjekt* ente;

public:
	~SenderRing();
	explicit SenderRing(QuakBeobachtungsSubjekt* ente) :
			ente(ente) {
		assert(ente);
	}

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	vector<Beobachter*> getBeobachtende();

};
#endif
