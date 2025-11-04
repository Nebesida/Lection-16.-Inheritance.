#include "Human.h"
#include <iostream>

Human::~Human() {}

Human::Human() : _name("undefined"), _surname("undefined"), _age(0), _height(0), _weight(0){}

Human::Human(std::string name, std::string surname, int age, int height, int weight) : _name(correctAlpha(name)), _surname(correctAlpha(surname)), _age(correctCount(age)), _height(correctCount(height)), _weight(correctCount(weight)) {}
Human::Human(std::string name, std::string surname, int age, int height) : Human(name, surname, age, height, 0) {}
Human::Human(std::string name, std::string surname, int age) : Human(name, surname, age, 0, 0){}
Human::Human(std::string name, std::string surname) : Human(name, surname, 0, 0, 0) {}
Human::Human(std::string name) : Human (name, "undefined", 0, 0, 0) {}

Human::Human(const Human& other) : Human(other._name, other._surname, other._age, other._height, other._weight) {}

std::string Human::getName()
{
	return _name;
}

void Human::setName(std::string name)
{
	this->_name = correctAlpha(name);
}

std::string Human::getSurname()
{
	return _surname;
}

void Human::setSurname(std::string surname)
{
	this->_surname = correctAlpha(surname);
}

int Human::getAge() const
{
	return _age;
}

void Human::setAge(int age)
{
	this->_age = correctCount(age);
}

int Human::getHeight() const
{
	return _height;
}

void Human::setHeight(int height)
{
	this->_height = correctCount(height);
}

int Human::getWeight() const
{
	return _weight;
}

void Human::setWeight(int weight)
{
	this->_weight = correctCount(weight);
}

Human& Human::operator++()
{
	++_weight;
	return *this;
}

Human& Human::operator--()
{
	if (_weight > 0)
	{
		--_weight;
		return *this;
	}
	else
	{
		std::cout << "¬аш вес меньше 0" << std::endl;
		return *this;
	}
}

Human Human::operator++(int)
{
	Human obj(*this);
	++*this;
	return obj;
}

Human Human::operator--(int)
{
	Human obj(*this);
	--*this;
	return obj;
}

bool Human::operator<(Human& other)
{
	return this->_age < other._age;
}

bool Human::operator>(Human& other)
{
	return this->_age > other._age;
}

bool Human::operator==(Human& other)
{
	return this->_age == other._age;
}

void Human::displayHuman() {
	std::cout << _name << std::endl << _surname << std::endl;
	std::cout << _age << std::endl << _height << std::endl << _weight << std::endl;
}