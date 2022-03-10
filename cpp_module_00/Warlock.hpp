#pragma once

#include <iostream>

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

private:
	std::string	name;
	std::string	title;
	Warlock( void ) {}
	Warlock( const Warlock& copy ) { *this = copy; }
	Warlock&	operator=( const Warlock& rop )
	{
		if (this != &rop)
			return(*this);
		return(*this);
	}
};