#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain const &cpy);
		Brain	&operator=(Brain const &src);

	private:
		std::string ideas[100]; //pas de _ ???
};

#endif