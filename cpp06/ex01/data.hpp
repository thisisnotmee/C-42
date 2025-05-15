#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	std::string str;
	int a;
} Data;


class Serializer {
	public :
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
		static int		Intizer(Data *src);
	private :
		Serializer();		
		~Serializer();
};

#endif