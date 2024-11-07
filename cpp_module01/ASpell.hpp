#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const std::string &newName, const std::string &newEffects);
		ASpell(const ASpell &other);
		const ASpell& operator=(const ASpell &other);
		~ASpell();

		const std::string getName(void) const;
		const std::string getEffects(void) const;
		virtual ASpell* clone(void) = 0;
		void launch(const ATarget& target);		
}

#endif
