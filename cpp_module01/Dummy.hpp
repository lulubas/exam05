#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Dummy : public ATarget {
	public:
		Dummy();
		Dummy(const Dummy &other);
		const Dummy& operator=(const Dummy &other);
		~Dummy();

		Dummy* clone(void);
}

#endif
