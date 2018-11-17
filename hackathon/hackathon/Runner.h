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

	bool getIsMale() const;
	int getAge() const;
	int getDisctance() const;
	double getTime() const;
	double getTarget() const;
};