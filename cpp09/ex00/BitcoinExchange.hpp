#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange
{
	public:
		BitcoinExchange(char **argv);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange &src);
		BitcoinExchange &operator=(BitcoinExchange &src);

		void	parsing(char **arv);
		void	exec();

	private:
		BitcoinExchange();
		std::ifstream _infile;
		std::ifstream _data;
};

#endif