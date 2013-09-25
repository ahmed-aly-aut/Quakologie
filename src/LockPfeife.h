#ifndef LOCK_PFEIFE_H
#define LOCK_PFEIFE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "SenderRing.h"
#include "Beobachter.h"
#include "Quakfaehig.h"

using namespace std;

class LockPfeife: public Quakfaehig {
private:
	SenderRing* senderRing;

public:
	LockPfeife() :
			senderRing(new SenderRing(this)) {
	}

	void quaken();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

};
#endif
