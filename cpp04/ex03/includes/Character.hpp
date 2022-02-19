#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
public:
	Character(const std::string& name);
	virtual ~Character();

	Character(const Character& other);
	Character&	operator=(const Character& other);

	virtual const std::string&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
private:
	std::string _name;
	AMateria	*_inventory[SLOTS];
};

#endif
