#include "String.h"

String::String()
{
	str = "00000000";
}

String::String(const char* mstr)
{
	str = *mstr;
}


String::~String()
{
	delete str;
}
