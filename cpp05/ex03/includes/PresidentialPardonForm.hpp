#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
public:
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm&);

	void	 pardon() const;
	virtual void	execute(const Bureaucrat& executor) const;
private:
	std::string	_target;
};

#endif
