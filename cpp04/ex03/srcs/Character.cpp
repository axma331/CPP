#include "Character.hpp"


Character::Character(const std::string& name) : _name(name) {
	std::cout << "Character constructot called" << std::endl;
	for (int i(0); i < MASS; ++i)
		this->inventory[i] = nullptr;
}

Character::Character(const Character& other) {
	*this = other;
}
Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i(0); i < MASS; ++i) {
			delete this->inventory[i];
			if (other.inventory[i] != nullptr)
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character(void) {
	std::cout << "Character destructot called" << std::endl;
	for (int i(0); i < MASS; ++i)
		if (this->inventory[i] != nullptr) {
			delete this->inventory[i];
			this->inventory[i] = nullptr;
		}
}


const std::string&	Character::getName(void) const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (int i(0); i < MASS; ++i)
		if (this->inventory[i] == nullptr) {
			this->inventory[i] = m->clone();
			return ;
		}
}

void	Character::unequip(int idx) {
	delete this->inventory[idx];
	this->inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target) {
	this->inventory[idx]->AMateria::use(target);
}

