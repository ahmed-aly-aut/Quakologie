#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ZaehlendeEntenFabrik.h"
#include "QuakZaehler.h"
#include "StockEnte.h"
#include "MoorEnte.h"
#include "LockPfeife.h"
#include "GummiEnte.h"

Quakfaehig* ZaehlendeEntenFabrik::erzeugeStockEnte() {
	return new QuakZaehler(new StockEnte());
}

Quakfaehig* ZaehlendeEntenFabrik::erzeugeMoorEnte() {
	return new QuakZaehler(new MoorEnte());
}

Quakfaehig* ZaehlendeEntenFabrik::erzeugeLockPfeife() {
	return new QuakZaehler(new LockPfeife());
}

Quakfaehig* ZaehlendeEntenFabrik::erzeugeGummiEnte() {
	return new QuakZaehler(new GummiEnte());
}
