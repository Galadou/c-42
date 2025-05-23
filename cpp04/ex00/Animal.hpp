#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &cpy);
		Animal	&operator=(Animal const &src);

		virtual void	makeSound() const;
		const std::string	&getType() const;
		
	protected:
		std::string _type;
};

#include "Cat.hpp"
#include "Dog.hpp"

#endif