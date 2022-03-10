#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook
{
public:
	SpellBook( void ) {}
	~SpellBook( void ) {}
	void	learnSpell( ASpell* sp )
	{
		std::vector<ASpell*>::iterator	b = spell.begin();
		std::vector<ASpell*>::iterator	e = spell.end();

		for (; b != e; b++)
		{
			if ((*b)->getName() == sp->getName())
				return;
		}
		spell.push_back(sp);
	}
	void	forgetSpell( const std::string& name )
	{
		std::vector<ASpell*>::iterator	b = spell.begin();
		std::vector<ASpell*>::iterator	e = spell.end();

		for (; b != e; b++)
		{
			if ((*b)->getName() == name)
			{
				delete *b;
				spell.erase(b);
				return ;
			}
		}
	}
	ASpell*	createSpell( const std::string& name )
	{
		std::vector<ASpell*>::iterator	b = spell.begin();

		for (; b != spell.end(); b++)
		{
			if ((*b)->getName() == name)
				return(*b);
		}
		return (NULL);
	}
private:
	std::vector<ASpell*>	spell;
	SpellBook( const SpellBook& copy ) { *this = copy; }
	SpellBook&	operator=( const SpellBook& rop )
	{
		if (this != &rop )
			return (*this);
		return (*this);
	}
};