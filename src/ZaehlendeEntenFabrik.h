#ifndef ZAEHLENDE_ENTEN_FABRIK_H
#define ZAEHLENDE_ENTEN_FABRIK_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "AbstraktEntenFabrik.h"
#include "Quakfaehig.h"

class ZaehlendeEntenFabrik: public AbstraktEntenFabrik {
public:
	Quakfaehig* erzeugeStockEnte();

	Quakfaehig* erzeugeMoorEnte();

	Quakfaehig* erzeugeLockPfeife();

	Quakfaehig* erzeugeGummiEnte();

};
#endif
