#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Quakologe.h"
#include "Quakfaehig.h"

using namespace std;

/**
 * This method gives the Duck back that gave a sound.
 * dynamic_cast is used that you can say "only ducks"
 * here you use the interface Quakfaehig that only the duck have.
 * @param ente put the duck here
 */
void Quakologe::aktualisieren(QuakBeobachtungsSubjekt* ente) {
	cout << "Quakologe: " << dynamic_cast<Quakfaehig*>(ente)->toString()
			<< " hat gerade gequakt." << endl;
}

string Quakologe::toString() {
	return "Quakologe";
}
