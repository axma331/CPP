#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
public:
	MateriaSource();
	virtual	~MateriaSource();

	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(const std::string& type);
private:
	AMateria	*_materia[SLOTS];
};

#endif

