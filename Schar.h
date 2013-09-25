#ifndef SCHAR_H
#define SCHAR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Quakfaehig.h"
#include "Beobachter.h"

using namespace std;

class Schar : public Quakfaehig
{
private:
	vector<Quakfaehig*> ar;

public:
	Schar();

	void hinzufuegen(Quakfaehig* ente);

	void quaken();

	void registriereBeobachter(Beobachter* beobachter);

	void benachrichtigeBeobachtende();

	string toString();

};
#endif
