#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

static int n = 0;

class Animal {
public:
	Animal(void);
	Animal(const std::string &type);
	Animal(const Animal &other);
	virtual ~Animal(void);

	Animal	&operator=(const Animal &other);

	virtual void	makeSound(void) const = 0;
	const std::string	getType(void) const;

protected:
	std::string	_type;
};

#endif
