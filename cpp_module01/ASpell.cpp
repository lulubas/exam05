#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string &newName, const std::string &newEffects) : name(newName), effects(newEffects) {}

ASpell::ASpell(const ASpell &other){
	(void)other;
}

const ASpell& ASpell::operator=(const ASpell &other) {
	(void) other;
	return *this;
}

ASpell::~ASpell() {}

const std::string& ASpell::getName(void) const {
         return (name);
}

const std::string& ASpell::getEffects(void) const {
         return (effects);
}

void ASpell::launch(const ATarget& target) {
	target.getHitBySpell(*this);
}
