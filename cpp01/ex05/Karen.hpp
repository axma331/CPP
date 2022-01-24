#ifndef KAREN_CLASS_H
# define KAREN_CLASS_H
#include <iostream>

class Karen {
public:
	Karen(void);
	~Karen(void);

	void		complain(std::string level);
private:
	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
};

#endif
