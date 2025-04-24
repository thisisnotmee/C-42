#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public :

	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);

	virtual void makeSound() const;
};
