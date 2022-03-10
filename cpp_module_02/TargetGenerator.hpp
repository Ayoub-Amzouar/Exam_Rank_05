#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator
{
public:
	TargetGenerator( void ) {}
	~TargetGenerator( void ) {}
	void	learnTargetType( ATarget* sp )
	{
		std::vector<ATarget*>::iterator	b = target.begin();

		for (; b != target.end(); b++)
		{
			if ((*b)->getType() == sp->getType())
				return;
		}
		target.push_back(sp);
	}
	void	forgetTargetType( const std::string& type )
	{
		std::vector<ATarget*>::iterator	b = target.begin();

		for (; b != target.end(); b++)
		{
			if ((*b)->getType() == type)
			{
				delete *b;
				target.erase(b);
				return ;
			}
		}
	}
	ATarget*	createTarget( const std::string& type )
	{
		std::vector<ATarget*>::iterator	b = target.begin();

		for (; b != target.end(); b++)
		{
			if ((*b)->getType() == type)
				return(*b);
		}
		return (NULL);
	}
private:
	std::vector<ATarget*>	target;
	TargetGenerator( const TargetGenerator& copy ) { *this = copy; }
	TargetGenerator&	operator=( const TargetGenerator& rop )
	{
		if (this != &rop )
			return (*this);
		return (*this);
	}
};