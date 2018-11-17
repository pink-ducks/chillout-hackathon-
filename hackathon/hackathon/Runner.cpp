#include "Runner.h"

Runner::Runner()
{
}

Runner::Runner(std::string name, bool isMale, int age, int distance, double time, double target) : name(name),
isMale(isMale), age(age), distance(distance), time(time), target(target)
{
}

Runner::~Runner()
{
}

//getters
bool Runner::getIsMale() const
{
	return isMale;
}

int Runner::getAge() const
{
	return age;
}

int Runner::getDisctance() const
{
	return distance;
}

double Runner::getTime() const
{
	return time;
}

double Runner::getTarget() const
{
	return target;
}
