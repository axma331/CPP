#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
public:
	Animal(void);
	Animal(const std::string &type);
	Animal(const Animal &other);
	virtual ~Animal(void);

	Animal	&operator=(const Animal &other);

	virtual void	makeSound(void) const;
	const std::string	getType(void) const;

protected:
	std::string	_type;
};

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &other);

	void		makeSound() const;
	const std::string	getType() const;
protected:
	std::string	_type;
};

#endif