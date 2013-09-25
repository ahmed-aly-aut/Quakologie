#ifndef QUAKOLOGY_ENTEN_SIMULATOR_H
#define QUAKOLOGY_ENTEN_SIMULATOR_H

#include "Quakfaehig.h"
#include "QuakZaehler.h"
#include "LockPfeife.h"
#include "Gans.h"
#include "GansAdapter.h"
#include "MoorEnte.h"
#include "StockEnte.h"
#include "GummiEnte.h"
#include "Schar.h"
#include "Quakologe.h"
#include "SenderRing.h"
#include "Beobachter.h"
#include "AbstraktEntenFabrik.h"
#include "ZaehlendeEntenFabrik.h"
#include "EntenFabrik.h"

class EntenSimulator {
public:
	int main(void);

	void simulieren(Quakfaehig* ente);
};
#endif
