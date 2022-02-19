#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

#define SLOTS	4

class AMateria {
public:
	AMateria();
	AMateria(const std::string& type);
	virtual	~AMateria();

	AMateria(const AMateria& other);
	AMateria&	operator=(const AMateria & other);

	const std::string&	getType() const;
	virtual void		use(ICharacter& target);

	virtual AMateria*	clone() const = 0;
protected:
	std::string	_type;
};

#endif
