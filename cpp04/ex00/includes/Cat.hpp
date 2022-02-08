#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &other);
	virtual ~Cat();
	Cat	&operator=(const Cat &other);

	virtual void	makeSound() const;
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
