#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const Fwoosh &other){
	(void)other;
}

const Fwoosh& Fwoosh::operator=(const Fwoosh &other) {
	(void) other;
	return *this;
}

Fwoosh::~Fwoosh() {}

Fwoosh* Fwoosh:clone(void) {
	Fwoosh* newFwoosh = new Fwoosh;
	return	newFwoosh;
}
