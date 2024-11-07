#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(const Dummy &other){
	(void)other;
}

const Dummy& Dummy::operator=(const Dummy &other) {
	(void) other;
	return *this;
}

Dummy::~Dummy() {}

Dummy* Dummy:clone(void) {
	Dummy* newDummy = new Dummy;
	return	newDummy;
}
