#ifndef ABSTRAKT_ENTEN_FABRIK_H
#define ABSTRAKT_ENTEN_FABRIK_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Quakfaehig.h"

class AbstraktEntenFabrik {
public:
	virtual Quakfaehig* erzeugeStockEnte()=0;

	virtual Quakfaehig* erzeugeMoorEnte()=0;

	virtual Quakfaehig* erzeugeLockPfeife()=0;

	virtual Quakfaehig* erzeugeGummiEnte()=0;

};
#endif
