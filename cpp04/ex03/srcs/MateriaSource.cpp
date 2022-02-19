#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i(0); i < SLOTS; ++i)
		this->_materia[i] = nullptr;
}

MateriaSource::~MateriaSource(void) {
	for (int i(0); i < SLOTS; ++i)
		if (this->_materia[i] != nullptr)
			delete this->_materia[i];
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i(0); i < SLOTS; ++i) {
			if (this->_materia[i] != nullptr)
				delete this->_materia[i];
			this->_materia[i] = other._materia[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia) {
	for (int i(0); i < SLOTS; ++i) {
		if (this->_materia[i] == nullptr) {
			this->_materia[i] = materia->clone();
			return ;
		}
	}	
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	for (int i(0); i < SLOTS; ++i)
		if (this->_materia[i] != nullptr) {
			if (!this->_materia[i]->getType().compare(type))
				return this->_materia[i];
		}
	return nullptr;
}