#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &other);
		virtual void makeSound() const;
};
