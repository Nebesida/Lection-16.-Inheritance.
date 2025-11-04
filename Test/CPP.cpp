#include "CPP.h"
#include <iostream>

//деструктор
CPP::~CPP() {}

//конструктор по умолчанию
CPP::CPP() : Topic() {_standart = 0;}

//параметризованный конструктор
CPP::CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize, int standart) : Topic(courseName, topicName, lectorName, lectsCount, tasksCount, topicSize), _standart(correctCount(standart)) {}

//делегирование конструкторов
CPP::CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize) : CPP (courseName, topicName, lectorName, lectsCount, tasksCount, topicSize, 0) {}
CPP::CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount) : CPP(courseName, topicName, lectorName, lectsCount, tasksCount, 0, 0) {}
CPP::CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount) :	CPP(courseName, topicName, lectorName, lectsCount, 0, 0, 0) {}
CPP::CPP(std::string courseName, std::string topicName, Human lectorName) : CPP(courseName, topicName, lectorName, 0, 0, 0, 0) {}
CPP::CPP(std::string courseName, std::string topicName) : CPP(courseName, topicName, Human(), 0, 0, 0, 0) {}
CPP::CPP(std::string courseName) : CPP(courseName, "undefined", Human(), 0, 0, 0, 0) {}

//конструктор копировани€
CPP::CPP(const CPP& other) : Topic(), _standart(other._standart) {}

//геттеры_сеттеры
void CPP::setStandart(int standart) {_standart = correctCount(standart);}
int CPP::getStandart() {return _standart;}

//методы
void CPP::displayCourse()
{
	setlocale(LC_ALL, "");
	Topic::displayCourse();
	std::cout << "»спользуемый стандарт —++: " << _standart << std::endl;
}