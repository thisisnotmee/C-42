#include "data.hpp"


int main()
{
	Data*	to_serialize = new Data;
	Data	*deserialized;

	to_serialize->str = "Salem rouya";
	to_serialize->a = 10;
	
	uintptr_t serialized = Serializer::serialize(to_serialize); 
	deserialized = Serializer::deserialize(serialized);

	std::cout << serialized << std::endl;
	std::cout << deserialized << std::endl;
}