#ifndef __WARLOCK_HPP__
#define __WARLOCK_HPP__

#include <string>
#include <vector>

class ASpell;
class ATarget;

class Warlock
{
public:
	Warlock( const std::string&, const std::string& );
	Warlock( const Warlock& );
	Warlock&	operator=( const Warlock& );
	~Warlock( void );

	const std::string&	getName( void ) const;
	const std::string&	getTitle( void ) const;

	void		setTitle( const std::string& );

	void		introduce( void ) const;

	void		learnSpell( ASpell* spell );
	void		forgetSpell( std::string name );
	void		launchSpell( std::string name, ATarget& target );
private:
	const std::string		name;
	std::string				title;
	std::vector<ASpell*>	a_spell;
};

#endif
