#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>


class AMateria {
public:
	AMateria(void);
	AMateria(const std::string & type);
	AMateria(const AMateria & other);
	virtual ~AMateria(void);

	AMateria &operator= (const AMateria & other);
		
	const std::string & getType() const;
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;

protected:
	std::string	_type;
};

#endif
