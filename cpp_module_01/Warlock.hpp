#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class Warlock
{
public:
	Warlock( std::string NAME, std::string TITLE ) : name(NAME), title(TITLE)
	{
		std::cout << name << ": This looks like another boring day." << std::endl;
	}
	~Warlock( void )
	{
		std::cout << name << ": My job here is done!" << std::endl;
	}
	const	std::string&	getName( void ) const { return (name); }
	const	std::string&	getTitle( void ) const { return (title); }

	void					setTitle( const std::string val ) { title = val; }

	void					introduce( void ) const
	{
		std::cout << name << ": I am " << name << ", " << title << '!' << std::endl;
	}

	void					learnSpell( ASpell* sp )
	{
		std::vector<ASpell*>::iterator	b = spell.begin();
		std::vector<ASpell*>::iterator	e = spell.end();

		for (; b != e; b++)
		{
			if ((*b)->getName() == sp->getName()) // why we do << (*b) >> then << -> >> ?
				return;
		}
		spell.push_back(sp);
	}
	void					forgetSpell( std::string name )
	{
		std::vector<ASpell*>::iterator	b = spell.begin();
		std::vector<ASpell*>::iterator	e = spell.end();

		for (; b != e; b++)
		{
			if ((*b)->getName() == name)
			{
				delete *b;
				spell.erase(b);
			}
		}
	}
	void					launchSpell( std::string name, ATarget& target)
	{
		std::vector<ASpell*>::iterator	b = spell.begin();
		std::vector<ASpell*>::iterator	e = spell.end();

		for (; b != e; b++)
		{
			if ((*b)->getName() == name)
				(*b)->launch(target);
		}
	}

private:
	std::string				name;
	std::string				title;
	std::vector<ASpell*>	spell;
	Warlock( void ) {}
	Warlock( const Warlock& copy ) { *this = copy; }
	Warlock&	operator=( const Warlock& rop )
	{
		if (this != &rop)
			return(*this);
		return(*this);
	}
};