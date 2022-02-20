#include "ATarget.hpp"
#include "ASpell.hpp"

void	ATarget::getHitBySpell( ASpell& spell ) const { std::cout << type << " has been " << spell.getEffects() << '!' << std::endl; }