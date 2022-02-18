#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i(0); i < MASS; ++i)
		this->_materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		for (int i(0); i < MASS; ++i)
			if (this->_materia[i] != nullptr) {
				delete this->_materia[i];
				this->_materia[i] = other._materia[i]->clone();
			}
	}
	return *this;
}

MateriaSource::~MateriaSource(void) {
	for (int i(0); i < MASS; ++i)
		if (this->_materia[i] != nullptr) {
			delete this->_materia[i];
			this->_materia[i] = nullptr;
		}
}

void	MateriaSource::learnMateria(AMateria* materia) {
	for (int i(0); i < MASS; ++i) {
		if (this->_materia[i] == nullptr) {
			this->_materia[i] = materia->clone();
			return ;
		}
	}	
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i(0); i < MASS; ++i) {
		if (this->_materia[i] != nullptr) {
			if (!type.compare(this->_materia[i]->getType()))
				return this->_materia[i];
		}
	}
	return nullptr;
}