#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public Form {
public:
	RobotomyRequestForm(const std::string& target);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm&);

	void	 drillingNoises() const;
	virtual void	execute(const Bureaucrat& executor) const;
private:
	std::string	_target;
};

#endif
