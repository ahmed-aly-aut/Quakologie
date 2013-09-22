#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "GansAdapter.h"

void GansAdapter::quaken() {
	gans->schnattern();
	benachrichtigeBeobachtende();
}

void GansAdapter::registriereBeobachter(Beobachter* beobachter) {
	senderRing->registriereBeobachter(beobachter);
}

void GansAdapter::benachrichtigeBeobachtende() {
	senderRing->benachrichtigeBeobachtende();
}

string GansAdapter::toString() {
	return gans->toString();
}
