#pragma once

#include <iostream>
#include "ATarget.hpp"

class	BrickWall : public ATarget
{
public:
	BrickWall( void ) : ATarget("Inconspicuous Red-brick Wall") {}
	~BrickWall( void ) {}

	ATarget*	clone( void ) { return (new BrickWall()); }
};