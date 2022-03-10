#pragma once

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	Fireball( void ) : ASpell("Fireball", "burnt to a crisp") {}
	~Fireball( void ) {}

	ASpell*	clone( void ) const
	{
		return(new Fireball());
	}
};