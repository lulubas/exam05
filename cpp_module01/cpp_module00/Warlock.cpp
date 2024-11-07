#include "Warlock.hpp"

Warlock::Warlock() {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &other){
	(void)other;
}

const Warlock& Warlock::operator=(const Warlock &other) {
	(void) other;
	return *this;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &newName, const std::string &newTitle) : name(newName), title(newTitle) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName(void) const {
         return (name);
}

const std::string& Warlock::getTitle(void) const {
         return (title);
}

void Warlock::setTitle(const std::string &newTitle) {
	title = newTitle;
}

void Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
