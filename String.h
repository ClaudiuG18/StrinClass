#pragma once
using namespace std;

class String
{
public:
	String();
	String(const char* mstr);
	~String();

private:
	const char* str;
};

