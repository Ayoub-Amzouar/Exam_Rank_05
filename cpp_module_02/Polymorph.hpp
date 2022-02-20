#pragma once

#include "ASpell.hpp"

class	Polymorph : public ASpell
{
public:
	Polymorph( void ) : ASpell("Polymorph", "turned into a critter") {}
	~Polymorph( void ) {}

	ASpell*		clone( void ) { return (new Polymorph()); }
};