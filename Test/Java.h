#pragma once
#include "Topic.h"

class Java : public Topic
{
public:
	~Java();
	Java();
	Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName);
	Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize);
	Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount);
	Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount);
	Java(std::string courseName, std::string topicName, Human lectorName);
	Java(std::string courseName, std::string topicName);
	Java(std::string courseName);
	Java(const Java& other);

	void setFrameworkName(std::string frameworkName);
	std::string getFrameworkName();

	void displayCourse();

private:
	std::string _frameworkName;
};