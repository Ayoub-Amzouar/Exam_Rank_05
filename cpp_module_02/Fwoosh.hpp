#ifndef __FWOOSH_HPP__
#define __FWOOSH_HPP__

#include "ASpell.hpp"

class	Fwoosh : public ASpell
{
public:
	Fwoosh( void ) : ASpell("Fwoosh", "fwooshed") {}
	//~Fwoosh( void ) {}

	ASpell*		clone( void ) { return (new Fwoosh()); }
};

#endif