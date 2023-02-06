#pragma once

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage);
	~Person();

	void ShowPersonInfo() const;
};

