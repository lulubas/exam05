#include "Warlock.hpp"

Warlock::Warlock() {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &other){
	(void)other;
}

const Warlock& Warlock::operator=(const Warlock &other) {
	(void) other;
	return *this;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &newName, const std::string &newTitle) : _name(newName), _title(newTitle) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName(void) const {
         return (_name);
}

const std::string& Warlock::getTitle(void) const {
         return (_title);
}

void Warlock::setTitle(const std::string &newTitle) {
	_title = newTitle;
}

void Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* newSpell) {
	_spells.push_back(newSpell);
}

void Warlock::forgetSpell(std::string spellName) {
	std::vector<ASpell*>iterator it = _spells.begin();
	while (it != _spells.end()) {
		if (it->name == spellName)
			_spells.erase(it);
		it++;
	}
}

void Warlock::launchSpell(const std::string &spellName, ATarget& target) {
	std::vector<ASpell*>iterator it = _spells.begin();
	while (it != _spells.end()) {
		if (it->name == spellName)
			it->launch(target);
		it++;
	}
}


