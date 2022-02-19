#include "Character.hpp"

Character::Character(const std::string& name): _name(name) {
	for (int i(0); i < SLOTS; ++i)
		this->_inventory[i] = nullptr;
}

Character::~Character(void) {
	for (int i(0); i < SLOTS; ++i)
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
}

Character::Character(const Character& other) {
	*this = other;
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i(0); i < SLOTS; ++i) {
			if (this->_inventory[i] != nullptr)
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

const std::string&	Character::getName(void) const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (int i(0); i < SLOTS; ++i)
		if (this->_inventory[i] == nullptr) {
			this->_inventory[i] = m->clone();
			return ;
		}
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx] != nullptr) {
		delete this->_inventory[idx];
		this->_inventory[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter& target) {
	this->_inventory[idx]->AMateria::use(target);
}

