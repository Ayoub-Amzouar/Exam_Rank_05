#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh( void ) : ASpell("Fwoosh", "fwooshed") {}
	~Fwoosh( void ) {}

	ASpell*	clone( void ) const
	{
		return(new Fwoosh());
	}

};