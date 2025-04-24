#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public :

	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	virtual void makeSound() const;
};
