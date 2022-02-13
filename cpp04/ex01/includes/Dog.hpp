#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog: public Animal {
public:
	Dog(void);
	Dog(const std::string &name);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	virtual ~Dog(void);

	virtual void	makeSound(void) const;

private:
	Brain	*_brain;
};

#endif
