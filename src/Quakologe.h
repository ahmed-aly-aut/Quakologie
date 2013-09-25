#ifndef QUAKOLOGE_H
#define QUAKOLOGE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QuakBeobachtungsSubjekt.h"

using namespace std;

class Quakologe : public Beobachter{
protected:
	QuakBeobachtungsSubjekt* qbs;

public:
	void aktualisieren(QuakBeobachtungsSubjekt* ente);

	string toString();

};
#endif
