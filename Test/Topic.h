#pragma once
#include "Human.h"

class Topic {
public:
	//деструктор
	~Topic();
	//конструкторы
	Topic();//убираем default, поскольку поля должны быть обязательно инициализированы
	Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize);
	Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount);
	Topic(std::string courseName, std::string topicName, Human lectorName, int lectsCount);
	Topic(std::string courseName, std::string topicName, Human lectorName);
	Topic(std::string courseName, std::string topicName);
	Topic(std::string courseName);

	//конструктор копирования
	Topic(const Topic& other);

	//геттеры и сеттеры
	void setCourseName(std::string courseName);
	std::string getCourseName();
	void setTopicName(std::string topicName);
	std::string getTopicName();
	void setLectorName(Human lectorName);
	Human getLectorName();
	void setLectsCount(int lectsCount);
	int getLectsCount() const;
	void setTasksCount(int tasksCount);
	int getTasksCount() const;
	void setTopicSize(int topicSize);
	int getTopicSize() const;

	//перегрузка операторов
	Topic& operator++();
	Topic& operator--();
	Topic operator++(int);
	Topic operator--(int);
	bool operator<(Topic& other);
	bool operator>(Topic& other);
	bool operator==(Topic& other);

	//методы
	void displayCourse();
	
private:
	std::string _courseName;
	std::string _topicName;
	Human _lectorName;
	int _lectsCount;
	int _tasksCount;
	int _topicSize;
};