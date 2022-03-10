#pragma once

#include <iostream>
#include "ASpell.hpp"

class	ATarget
{
public:
	ATarget( void ) {}
	ATarget( std::string TYPE ) : type(TYPE) {}
	ATarget( const ATarget& copy ) { *this = copy; }
	ATarget&	operator=( const ATarget& rop )
	{
		if (this != &rop )
			type = rop.type;
		return (*this);
	}
	virtual ~ATarget( void ) {}

	const	std::string&	getType( void ) const { return (type); }

	virtual	ATarget*	clone( void ) const = 0;

	void	getHitBySpell( const ASpell& spell ) const
	{
		std::cout << type << " has been " << spell.getEffects() << '!' << std::endl;
	}

protected:
	std::string	type;
};