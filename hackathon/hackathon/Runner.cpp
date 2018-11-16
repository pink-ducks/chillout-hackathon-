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
