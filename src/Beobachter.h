#ifndef BEOBACHTER_H
#define BEOBACHTER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakBeobachtungsSubjekt.h"

class QuakBeobachtungsSubjekt;
class Beobachter {
public:
	virtual void aktualisieren(QuakBeobachtungsSubjekt* ente)=0;

};
#endif
