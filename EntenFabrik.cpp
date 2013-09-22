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


Quakfaehig* EntenFabrik::erzeugeStockEnte()
{
	return new StockEnte();
}

Quakfaehig* EntenFabrik::erzeugeMoorEnte()
{
	return new MoorEnte();
}

Quakfaehig* EntenFabrik::erzeugeLockPfeife()
{
	return new LockPfeife();
}

Quakfaehig* EntenFabrik::erzeugeGummiEnte()
{
	return new GummiEnte();
}
