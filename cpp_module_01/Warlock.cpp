#include "Warlock.hpp"
#include <iostream>


Warlock::Warlock( const std::string& NAME, const std::string& TITLE) : name(NAME), title(TITLE)
{
	std::cout << this->name << ": This looks like another boring day"<< std::endl;
}

Warlock::Warlock( const Warlock& copy )
{
	*this = copy;
}

Warlock&	Warlock::operator=( const Warlock& rop )
{
	if (this != &rop)
		this->title = rop.title;
	return (*this);
}

Warlock::~Warlock( void )
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const	std::string& Warlock::getName( void ) const
{
	return (this->name);
}

const	std::string& Warlock::getTitle( void ) const
{
	return (this->title);
}

void	Warlock::setTitle( const std::string& copy)
{
	this->title = copy;
}

void	Warlock::introduce( void ) const
{
	std::cout << this->name << ": I am " << this->name << ", "  << this->title << " !"  << std::endl;
}
