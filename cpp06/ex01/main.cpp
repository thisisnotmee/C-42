#include "data.hpp"

int main()
{
	Data*	to_serialize = new Data;
	Data	*deserialized;

	to_serialize->str = "Salem rouya";
	to_serialize->a = 10;
	
	uintptr_t serialized = Serializer::serialize(to_serialize); 
	deserialized = Serializer::deserialize(serialized);
	
	std::cout << "Data      = " << to_serialize->str << " agé de " << to_serialize->a << " ans" << std::endl;
	std::cout << "uintptr_t = " << serialized << std::endl;
	std::cout << "Data      = " << deserialized->str;

	return 0;
}