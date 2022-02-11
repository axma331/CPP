#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define	NUM	100

class Brain {
public:
	Brain(void);
	Brain(const Brain &other);
	virtual ~Brain(void);

	Brain &operator=(const Brain &other);
	
private:
	std::string	ideas[NUM];
};

#endif