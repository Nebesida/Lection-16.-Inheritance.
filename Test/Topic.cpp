#include "Topic.h"
#include <iostream>

//деструктор
Topic::~Topic() {}

//конструктор по умолчанию
Topic::Topic() : _courseName("undefined"), _topicName("undefined"), _lectorName(Human()), _lectsCount(0), _tasksCount(0), _topicSize(0) {}

//параметризованный конструктор
Topic::Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize) :
	_courseName(correctAlpha(courseName)), _topicName(correctAlpha(topicName)), _lectorName(lectorName),
	_lectsCount(correctCount(lectsCount)), _tasksCount(correctCount(tasksCount)), _topicSize(correctCount(topicSize)) {}

//делегирование конструкторов
Topic::Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount) : Topic(courseName, topicName, lectorName, lectsCount, tasksCount, 0) {}
Topic::Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount) : Topic(courseName, topicName, lectorName, lectsCount, 0, 0) {}
Topic::Topic(std::string courseName, std::string topicName, Human lectorName) : Topic(courseName, topicName, lectorName, 0, 0, 0) {}
Topic::Topic(std::string courseName, std::string topicName) : Topic(courseName, topicName, Human(), 0, 0, 0) {}
Topic::Topic(std::string courseName) : Topic(courseName, "undefined", Human(), 0, 0, 0) {}

//конструктор копирования
Topic::Topic(const Topic& other) : Topic(other._courseName, other._topicName, other._lectorName, other._lectsCount, other._tasksCount, other._topicSize) {}

void Topic::setCourseName(std::string courseName)
{
	this->_courseName = courseName;
}

std::string Topic::getCourseName()
{
	return _courseName;
}

void Topic::setTopicName(std::string topicName) 
{
	this->_topicName = validate::correctAlpha(topicName);
}

std::string Topic::getTopicName() 
{
	return _topicName;
}

void Topic::setLectorName(Human lectorName) 
{
	this->_lectorName = lectorName;
}

Human Topic::getLectorName() 
{
	return _lectorName;
}

void Topic::setLectsCount(int lectsCount) 
{
	this->_lectsCount = validate::correctCount(lectsCount);
}

int Topic::getLectsCount() const 
{
	return _lectsCount;
}

void Topic::setTasksCount(int tasksCount)
{
	this->_tasksCount = validate::correctCount(tasksCount);
}

int Topic::getTasksCount() const
{
	return _tasksCount;
}

void Topic::setTopicSize(int topicSize) 
{
	this->_topicSize = validate::correctCount(topicSize);
}

int Topic::getTopicSize() const
{
	return _topicSize;
}

Topic& Topic::operator++()
{
	_topicSize+=10;
	return *this;
}

Topic& Topic::operator--()
{
	if (_topicSize >= 10)
	{
		_topicSize-=10;
		return *this;
	}
	else
	{
		std::cout << "Количество страниц темы меньше 10!" << std::endl;
		return *this;
	}
}

Topic Topic::operator++(int)
{
	Topic obj(*this);
	++*this;
	return obj;
}

Topic Topic::operator--(int)
{
	Topic obj(*this);
	--*this;
	return obj;
}

bool Topic::operator<(Topic& other)
{
	return this->_topicSize < other._topicSize;
}

bool Topic::operator>(Topic& other)
{
	return this->_topicSize > other._topicSize;
}

bool Topic::operator==(Topic& other)
{
	return this->_topicSize == other._topicSize;
}

void Topic::displayCourse()
{
	std::cout << "Название курса: " << _courseName << std::endl;
	std::cout << "Название темы: " << _topicName << std::endl;
	std::cout << "Имя лектора: " << _lectorName.getName() << std::endl;
	std::cout << "Количество лекций темы: " << _lectsCount << std::endl;
	std::cout << "Количество задач в теме: " << _tasksCount << std::endl;
	std::cout << "Размер темы в страницах: " << _topicSize << std::endl;
}