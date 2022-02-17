#ifndef __ASPELL_HPP__
#define __ASPELL_HPP__

#include <string>
#include <iostream>

class	ASpell
{
public:
	ASpell( std::string& NAME, std::string& EFFECTS ) : name(NAME), effects(EFFECTS) {}
	ASpell( const ASpell& copy ) { *this = copy; }
	ASpell&		operator=( const Aspell& rop )
	{
		if (this != &rop)
		{
			this->name = rop.name;
			this->effects = rop.effects;
		}
		return (*this);
	}
	~ASpell( void ) {}

	std::string		getName( void ) { return (this->name); }
	std::string		getEffects( void ) { return (this->effects); }

	virtual ASpell*		clone( void ) = 0;
private:
	std::string name;
	std::string effects;
};

#endif
