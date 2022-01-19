#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"
#include <iomanip>

class PhoneBook {
public:
    PhoneBook(void);
    ~PhoneBook(void);

	int					add_book(void);
    void				using_book(void);

private:
	static const int	max_id = 8;
    Contact				Note[max_id];
};

#endif
