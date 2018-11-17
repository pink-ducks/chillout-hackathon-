#include "Runner.h"

//constructors
Runner::Runner()
{
}

Runner::Runner(std::string name, bool isMale, int age, int timeIndex, double target) : name(name),
isMale(isMale), age(age), timeIndex(timeIndex), target(target)
{
}

Runner::~Runner()
{
}

//getters

std::string Runner::getName() const
{
	return name;
}

bool Runner::getIsMale() const
{
	return isMale;
}

int Runner::getAge() const
{
	return age;
}
double Runner::getTime() const
{
	return timeIndex;
}

double Runner::getTarget() const
{
	return target;
}

void Runner::makeIndex()
{
	index = 20 + timeIndex + isMale;
}
