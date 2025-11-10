#include "Java.h"
#include <iostream>

Java::~Java() {}
Java::Java() : Topic() { _frameworkName = "undefined"; }
Java::Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize, std::string frameworkName) : Topic(courseName, topicName, lectorName, lectsCount, tasksCount, topicSize), _frameworkName(correctAlpha(frameworkName)) {}
Java::Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount, int topicSize) : Java(courseName, topicName, lectorName, lectsCount, tasksCount, topicSize, 0) {}
Java::Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount, int tasksCount) : Java(courseName, topicName, lectorName, lectsCount, tasksCount, 0, 0) {}
Java::Java(std::string courseName, std::string topicName, Human lectorName, int lectsCount) : Java(courseName, topicName, lectorName, lectsCount, 0, 0, 0) {}
Java::Java(std::string courseName, std::string topicName, Human lectorName) : Java(courseName, topicName, lectorName, 0, 0, 0, 0) {}
Java::Java(std::string courseName, std::string topicName) : Java(courseName, topicName, Human(), 0, 0, 0, 0) {}
Java::Java(std::string courseName) : Java(courseName, "undefined", Human(), 0, 0, 0, 0) {}
Java::Java(const Java& other) : Topic(other), _frameworkName(other._frameworkName) {}

void Java::setFrameworkName(std::string frameworkName) { _frameworkName = correctAlpha(frameworkName); }
std::string Java::getFrameworkName() { return _frameworkName; }

void Java::displayCourse()
{
	setlocale(LC_ALL, "");
	Topic::displayCourse();
	std::cout << "Èñïîëüçóåìûé ôðåéìâîðê Java: " << _frameworkName << std::endl;

}
