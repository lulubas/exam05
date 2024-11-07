#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	private:
		std::string type;
	public:
		ATarget();
		ATarget(const std::string& type);
		ATarget(const ATarget &other);
		const ATarget& operator=(const ATarget &other);
		~ATarget();

		const std::string getType(void) const;
		virtual ATarget* clone(void) = 0;
		void getHitBySpell(const ASpell& spell);
};

#endif
