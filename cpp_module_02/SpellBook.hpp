#pragma once

#include "ASpell.hpp"
#include <iostream>

class	SpellBook
{
public:
	SpellBook( void ) {}
	~SpellBook( void ) {}

	void	learnSpell( ASpell* spell)
	{}
	void	forgetSpell( std::string const & name )
	{}
	ASpell*	createSpell( std::string const & name )
	{}
private:
	SpellBook( const SpellBook& copy ) { *this = copy; }
	SpellBook&		operator=( const SpellBook& rop ) {}
};