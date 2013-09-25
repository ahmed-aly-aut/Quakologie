#ifndef QUAKFAEHIG_H
#define QUAKFAEHIG_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakBeobachtungsSubjekt.h"
#include "Beobachter.h"

using namespace std;

class Quakfaehig: public QuakBeobachtungsSubjekt {
public:
	virtual void registriereBeobachter(Beobachter* beobachter)=0;

	virtual void benachrichtigeBeobachtende()=0;

	virtual void quaken()=0;

	virtual string toString()=0;

};
#endif
