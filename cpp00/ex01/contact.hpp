#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

class Contact {
public:
    Contact(void);
    ~Contact(void);

	void add(int id);
	void show(void);
	void show_in_the_list(void);
private:
	int			id;
    std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
};

#endif
