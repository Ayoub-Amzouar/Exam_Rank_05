#include "ASpell.hpp"
#include "ATarget.hpp"

void		ASpell::launch( const ATarget& target )
{
	target.getHitBySpell(*this);
}