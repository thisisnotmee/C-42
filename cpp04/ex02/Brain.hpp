#pragma once

#include <iostream>
#include <string>

class Brain
{
	public :

	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &oterh);

	std::string	ideas[100];
};
