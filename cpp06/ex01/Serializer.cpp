#include "data.hpp"


Serializer::~Serializer( void )
{
}

Serializer::Serializer( void )
{
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int		Serializer::Intizer(Data *src)
{
	return reinterpret_cast<int>(src->a);
}
