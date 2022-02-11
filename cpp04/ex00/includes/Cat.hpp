#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat: public Animal {
public:
	Cat(void);
	Cat(const Cat &other);
	virtual ~Cat(void);

	Cat	&operator=(const Cat &other);

	virtual void	makeSound(void) const;
};

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(const std::string &type);
	WrongCat(const WrongCat &other);
	virtual ~WrongCat();
	WrongCat	&operator=(const WrongCat &other);

	virtual void	makeSound() const;
};

#endif
