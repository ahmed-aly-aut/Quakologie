#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "EntenFabrik.h"
#include "StockEnte.h"
#include "MoorEnte.h"
#include "LockPfeife.h"
#include "GummiEnte.h"

/*
 * Creates new StockEnte
 */
Quakfaehig* EntenFabrik::erzeugeStockEnte()
{
	return new StockEnte();
}
/*
 * Creates new MoorEnte
 */
Quakfaehig* EntenFabrik::erzeugeMoorEnte()
{
	return new MoorEnte();
}
/*
 * Creates new LockPfeife
 */
Quakfaehig* EntenFabrik::erzeugeLockPfeife()
{
	return new LockPfeife();
}
/*
 * Creates new GummiEnte
 */
Quakfaehig* EntenFabrik::erzeugeGummiEnte()
{
	return new GummiEnte();
}
