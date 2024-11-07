#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		Fwoosh(const Fwoosh &other);
		const Fwoosh& operator=(const Fwoosh &other);
		~Fwoosh();

		Fwoosh* clone(void);
}

#endif
