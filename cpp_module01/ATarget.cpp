#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string newType) : type(newType) {}

ATarget::ATarget(const ATarget &other){
	(void)other;
}

const ATarget& ATarget::operator=(const ATarget &other) {
	(void) other;
	return *this;
}

ATarget::~ATarget() {}

const std::string& ATarget::getType(void) const {
         return (type);
}

void ATarget::getHitBySpell(const ASpell& spell) {
	std::cout << type << "has been " << spell.getEffects() << std::endl;
}
