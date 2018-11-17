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

void Runner::calculateTrainingDaysAWeek()
{
	if (index < 22)
		trainingDaysAWeek = 2;
	if (index > 22 && index <= 24)
		trainingDaysAWeek = 3;
	if (index > 24 && index <= 26)
		trainingDaysAWeek = 4;
	if (index > 26 && index <= 28)
		trainingDaysAWeek = 5;
	if (index > 28)
		trainingDaysAWeek = 6;
}
