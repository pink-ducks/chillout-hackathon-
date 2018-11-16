#pragma once
#include <string>

class Runner {

private:
	std::string name;
	bool isMale;
	int age;
	int distance;
	double time;
	double target;

public:
	Runner();
	Runner(std::string, bool, int, int, double, double);
	~Runner();
};