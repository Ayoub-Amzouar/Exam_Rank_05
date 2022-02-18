#ifndef __ASPELL_HPP__
#define __ASPELL_HPP__

#include <iostream>

class ATarget;

class	ASpell
{
public:
	ASpell( std::string& NAME, std::string& EFFECTS ) : name(NAME), effects(EFFECTS) {}
	ASpell( const ASpell& copy ) { *this = copy; }
	ASpell&		operator=( const ASpell& rop )
	{
		if (this != &rop)
		{
			this->name = rop.name;
			this->effects = rop.effects;
		}
		return (*this);
	}
	~ASpell( void ) {}

	const std::string		getName( void ) const { return (this->name); }
	const std::string		getEffects( void ) const { return (this->effects); }

	virtual ASpell*		clone( void ) = 0;

	void				launch( const ATarget& target ) { target.getHitBySpell(*this); }
private:
	std::string name;
	std::string effects;
};

#endif
