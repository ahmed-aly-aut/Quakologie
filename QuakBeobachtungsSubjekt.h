#ifndef QUAK_BEOBACHTUNGS_SUBJEKT_H
#define QUAK_BEOBACHTUNGS_SUBJEKT_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Beobachter.h"

using namespace std;

class QuakBeobachtungsSubjekt {
public:
	virtual void registriereBeobachter(Beobachter* beobachter)=0;

	virtual void benachrichtigeBeobachtende()=0;

};
#endif
