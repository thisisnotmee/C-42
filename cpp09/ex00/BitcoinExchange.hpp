#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <stdexcept>

class BitcoinExchange
{
	public:
			BitcoinExchange(std::ifstream &file,char **av);
			BitcoinExchange(BitcoinExchange const &src);
			~BitcoinExchange();
			//void printMap();


			BitcoinExchange &	operator=(BitcoinExchange const &rSym);
	private:
			std::map<std::string, float>dataMap;
			void fillMap(std::ifstream &file);
			void fillInput(std::ifstream &file, char **av);
			void verifyInput(std::string date, float value);
			void findDate(std::string date, float value);
};
