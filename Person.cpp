#include "Person.h"

#include <iostream>
#include <cstring>
using namespace std;

// 생성자
Person::Person(const char* myname, int myage) {
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy_s(name,len, myname);
	age = myage;
}

void Person::ShowPersonInfo() const {
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
}
// 소멸자
Person::~Person() {
	delete[]name;
	cout << "called destructor..." << endl;
}