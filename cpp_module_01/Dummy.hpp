#ifndef __DUMMY_HPP__
#define __DUMMY_HPP__

#include <iostream>
#include "ATarget.hpp"

class	Dummy : public ATarget
{
public:
	Dummy( void ) : ATarget("Target Practice Dummy") {}
	// ~Dummy( void ) {}

	ATarget*	clone( void ) { return (new Dummy()); }
};

#endif