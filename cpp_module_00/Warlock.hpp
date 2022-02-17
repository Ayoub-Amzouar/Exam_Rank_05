#ifndef __WARLOCK_HPP__
#define __WARLOCK_HPP__

#include <string>

class Warlock
{
public:
	Warlock( const std::string&, const std::string& );
	Warlock( const Warlock& );
	Warlock&	operator=( const Warlock& );
	~Warlock( void );

	const std::string&	getName( void ) const;
	const std::string&	getTitle( void ) const;

	void				setTitle( const std::string& );

	void				introduce( void ) const;

private:
	const std::string	name;
	std::string			title;
};

#endif
