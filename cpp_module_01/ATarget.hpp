#ifndef __ATARGET_HPP__
#define __ATARGET_HPP__

#include <iostream>

class ASpell;

class	ATarget
{
public:
	ATarget( std::string& TYPE) : type(TYPE) {}
	ATarget( const ATarget& copy ) { *this = copy; }
	ATarget&		operator=( const ATarget& rop )
	{
		if (this != &rop)
			this->type = rop.type;
		return (*this);
	}
	~ATarget( void ) {}

	const std::string		getType( void ) const { return (this->type); }

	virtual ATarget*		clone( void ) = 0;

	void					getHitBySpell( const ASpell& spell ) { std::cout << type << " has been " << spell.getEffects() << '!' << std::endl; }
private:
	std::string type;
};

#endif