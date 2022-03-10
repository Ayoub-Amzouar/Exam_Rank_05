#pragma once

#include <iostream>

class	ATarget;

class	ASpell
{
public:
	ASpell( void ) {}
	ASpell( std::string NAME, std::string EFFECTS ) : name(NAME), effects(EFFECTS) {}
	ASpell( const ASpell& copy ) { *this = copy; }
	ASpell&	operator=( const ASpell& rop )
	{
		if (this != &rop )
		{
			name = rop.name;
			effects = rop.effects;
		}
		return (*this);
	}
	virtual ~ASpell( void ) {}

	const	std::string&	getName( void ) const { return (name); }
	const	std::string&	getEffects( void ) const { return (effects); }

	virtual	ASpell*	clone( void ) const = 0;

	void			launch( const ATarget& target );
protected:
	std::string	name;
	std::string	effects;
};