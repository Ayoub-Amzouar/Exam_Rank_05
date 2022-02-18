#ifndef __FWOOSH_HPP__
#define __FWOOSH_HPP__

#include <iostream>
#include "ASpell.hpp"

class	Fwoosh : public ASpell
{
public:
	Fwoosh( void ) : name("Fwoosh"), effects("fwooshed") {}
	// ~Fwoosh( void ) {}

	ASpell*		clone( void ) { return (new Fwoosh()); }
};

#endif