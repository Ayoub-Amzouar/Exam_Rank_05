#include "Warlock.hpp"
#include <iostream>

int		main( void )
{
//	Warlock bob;                            //Does not compile
	Warlock bob("Bob", "the magnificent");  //Compiles
	Warlock jim("Jim", "the nauseating");   //Compiles
	bob = jim;                              //Does not compile
//	Warlock jack(jim);                      //Does not compile
	return (0);
}
