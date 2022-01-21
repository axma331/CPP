#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie {
public:
	Zombie(void);
	~Zombie(void);

	void		setName(const std::string &name);
	void		announce(void) const;
private:
	std::string	_name;
};

#endif
