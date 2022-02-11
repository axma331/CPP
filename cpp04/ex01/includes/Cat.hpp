#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat: private Animal {
public:
	Cat(void);
	Cat(const Cat &other);
	virtual ~Cat(void);

	Cat	&operator=(const Cat &other);

	virtual void	makeSound(void) const;
};

#endif
