#pragma once
#include "Topic.h"

class CPP : public Topic
{
public:
	~CPP();
	CPP();
	CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize, int standart);
	CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize);
	CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount);
	CPP(std::string courseName, std::string topicName, Human lectorName, int lectsCount);
	CPP(std::string courseName, std::string topicName, Human lectorName);
	CPP(std::string courseName, std::string topicName);
	CPP(std::string courseName);
	CPP(const CPP& other);

	void setStandart(int standart);
	int getStandart();

	void displayCourse();

private:
	int _standart;
};