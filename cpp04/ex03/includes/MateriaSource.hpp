#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	virtual	~MateriaSource();

	MateriaSource&	operator=(const MateriaSource& other);

	virtual void	learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
private:
	AMateria	*_materia[MASS];
};

#endif

