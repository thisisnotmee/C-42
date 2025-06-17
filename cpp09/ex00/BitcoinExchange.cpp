#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream &fileName, char **av)
{
	std::ifstream	data;

	data.open("data.csv", std::ifstream::in);
	fillMap(data);
	fillInput(fileName, av);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
	dataMap.clear();
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const &rSym)
{
	if (this != &rSym)
	{
		this->dataMap = rSym.dataMap;
	}
	return *this;
}

void BitcoinExchange::fillMap(std::ifstream &fileName)
{
	std::string		date;
	std::string		line;
	float			value;

	while (getline(fileName, line))
	{
		date = strtok((char *)line.c_str(), ",");
		value = std::atof(strtok(NULL, "\n"));
		this->dataMap.insert(std::pair<std::string, float>(date, value));
	}
}

void BitcoinExchange::fillInput(std::ifstream &inputs, char **av)
{
	std::string		date;
	std::string		line;
	float			value;

	inputs.open(av[1], std::ifstream::in);
	getline(inputs, line);

	while (getline(inputs, line))
	{
		if (line.find("|") == std::string::npos)
			std::cout << "Error: bad input => " << line << std::endl;
		else {
			date = strtok((char *)line.c_str(), "|");
			value = std::atof(strtok(NULL, "\n"));
			try
			{
				verifyInput(date, value);
				this->dataMap.insert(std::pair<std::string, float>(date, value));
				findDate(date, value);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}

void BitcoinExchange::findDate(std::string date, float value)
{
	std::map<std::string, float>::iterator it = dataMap.find(date);

	if (it != dataMap.end()) {
		it--;
		std::cout << it->first << " => " << value << " = " << (value * it->second) << std::endl;
		this->dataMap.erase(date);
	}
}

void BitcoinExchange::verifyInput(std::string date, float value)
{
	std::string	year;
	std::string	month;
	std::string	day;
	std::string	dates;

	year = strtok((char *)date.c_str(), "-");
	month = strtok(NULL, "-");
	day = strtok(NULL, "\0");
	dates = year + month + day;

	if (dates.length() > 10 || dates.length() < 9)
		throw std::logic_error("error: bad input => " + date);

	if ((std::atoi(dates.c_str()) > 20220329) || std::atoi(dates.c_str()) < 20090102)
		throw std::logic_error("error: bad input => " + date);

	if (std::atoi(month.c_str()) > 12 || std::atoi(day.c_str()) > 31)
		throw std::logic_error("error: bad input => " + date);

	if (value > 1000)
		throw std::logic_error("error: too large number.");

	if (value < 0)
		throw std::logic_error("error: not positive number");

	std::map<std::string, float>::iterator it = dataMap.find(date);

	if (it != dataMap.end()) {
		float valueF = value * it->second;
		std::ostringstream oss;
		oss << valueF;
		std::string myString = oss.str();
		throw std::logic_error(it->first + " => " + myString);
	}
}