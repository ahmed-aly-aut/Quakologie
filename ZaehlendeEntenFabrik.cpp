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
/*
 * gibt einen neuen QuakZaehler einer StockEnte zurueck
 */
Quakfaehig* ZaehlendeEntenFabrik::erzeugeStockEnte() {
	return new QuakZaehler(new StockEnte());
}
/*
 * gibt einen neuen QuakZaehler einer MoorEnte zurueck
 */
Quakfaehig* ZaehlendeEntenFabrik::erzeugeMoorEnte() {
	return new QuakZaehler(new MoorEnte());
}
/*
 * gibt einen neuen QuakZaehler einer LockPfeife zurueck
 */
Quakfaehig* ZaehlendeEntenFabrik::erzeugeLockPfeife() {
	return new QuakZaehler(new LockPfeife());
}
/*
 * gibt einen neuen QuakZaehler einer GummiEnte zurueck
 */
Quakfaehig* ZaehlendeEntenFabrik::erzeugeGummiEnte() {
	return new QuakZaehler(new GummiEnte());
}
