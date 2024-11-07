#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <vector>

class Warlock {
	private :
		Warlock & operator=(Warlock const &other);
		Warlock(Warlock const &other);
		Warlock();
		std::string _name;
		std::string _title;
		std::vector<ASpell*> _spells;
		
	public :

		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void setTitle(const std::string &newtitle);
		void introduce() const;
		void learnSpell(ASpell* newSpell);
		void forgetSpell(const std::string spellName);
		void launchSpell(const std::string spellName, ATarget& target);
};

#endif
