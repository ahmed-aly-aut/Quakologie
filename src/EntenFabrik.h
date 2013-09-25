#ifndef ENTEN_FABRIK_H
#define ENTEN_FABRIK_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "AbstraktEntenFabrik.h"
#include "Quakfaehig.h"

class EntenFabrik: public AbstraktEntenFabrik {
public:
	Quakfaehig* erzeugeStockEnte();

	Quakfaehig* erzeugeMoorEnte();

	Quakfaehig* erzeugeLockPfeife();

	Quakfaehig* erzeugeGummiEnte();

};
#endif
