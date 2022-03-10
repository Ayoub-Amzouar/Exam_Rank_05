#pragma once

#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy( void ) : ATarget("Target Practice Dummy") {}
	~Dummy( void ) {}

	ATarget*	clone( void ) const
	{
		return(new Dummy());
	}

};