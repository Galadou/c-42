#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	//apparement stack
	randomChump("MONSTRE"); 
	std::cout << std::endl;

	//apparement heap
	Zombie *Zed;
	Zed = newZombie("Zed");
	Zed->announce();
	delete Zed;
	return (0);
}