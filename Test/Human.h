#pragma once
#include <string>
#include "Validate.h"
using namespace validate;

class Human {
public:
	~Human();
	Human();
	Human(std::string name, std::string surname, int age, int height, int weight);
	Human(std::string name, std::string surname, int age, int height);
	Human(std::string name, std::string surname, int age);
	Human(std::string name, std::string surname);
	Human(std::string name);
	Human(const Human& other);
	std::string getName();
	void setName(std::string name);
	std::string getSurname();
	void setSurname(std::string surname);
	int getAge() const;
	void setAge(int age);
	int getHeight() const;
	void setHeight(int height);
	int getWeight() const;
	void setWeight(int weight);

	Human& operator++();
	Human& operator--();
	Human operator++(int);
	Human operator--(int);
	bool operator<(Human& other);
	bool operator>(Human& other);
	bool operator==(Human& other);

	void displayHuman();

private:
	std::string _name, _surname;
	int _age, _height, _weight;
};