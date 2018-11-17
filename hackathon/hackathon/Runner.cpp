#include "Runner.h"

//constructors
Runner::Runner()
{
}

Runner::Runner(std::string name, bool isMale, int age, int timeIndex, double target) : name(name),
isMale(isMale), age(age), timeIndex(timeIndex), target(target)
{
}

Runner::Runner(bool isMale, int SelectedTimeIndex, int SelectedTargetIndex)
{								
	this->isMale = isMale;
	this->timeIndex = SelectedTimeIndex;
	this->target = SelectedTargetIndex;
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
void Runner::makeRuns(Run runTab[5])
{
	runTab[interwal] = { 0.1*(index),((80.0 + index * 0.4) / (index - 7.0)) - 0.9, int(index / 2 - 7) };
	runTab[treshold] = { index - 18, ((80.0 + index * 0.4) / (index - 7)) - 0.2, 1 };
	runTab[longRun] = { index - 17.5 + 2.5*target, ((80.0 + index * 0.4) / (index - 7)) + 0.2, 1 }; // todo ponoć
	runTab[recovery] = { (index - 17.5 + 2.5*target)*0.6, ((80.0 + index * 0.4) / (index - 7)) + 0.7, 1 }; // todo
	runTab[restDay] = { 0,0,0 };
}


void Runner::makePhase()
{
	TrainingElements element;
	Run runTab[5];
	makeRuns(runTab);

	// fill in restDays
	for (int i = 0; i < 7; i++)
	{
		element.base1[i] = runTab[restDay];
		element.base2[i] = runTab[restDay];

		element.build1[i] = runTab[restDay];
		element.build2[i] = runTab[restDay];

		element.peak1[i] = runTab[restDay];
		element.peak2[i] = runTab[restDay];

		element.tapering1[i] = runTab[restDay];
		element.tapering2[i] = runTab[restDay];
	}

	if (trainingDaysAWeek == 2) {
		element.base1[1] = runTab[recovery];
		element.base1[5] = runTab[recovery];

		index += 0.5;
		makeRuns(runTab);

		element.base2[1] = runTab[longRun];
		element.base2[5] = runTab[recovery];

		index += 0.5;
		makeRuns(runTab);

		element.build1[1] = runTab[longRun];
		element.build1[5] = runTab[recovery];
		element.build2[1] = runTab[longRun];
		element.build2[5] = runTab[treshold];

		index += 0.5;
		makeRuns(runTab);

		element.peak1[1] = runTab[longRun];
		element.peak1[5] = runTab[treshold];
		element.peak2[1] = runTab[longRun];
		element.peak2[5] = runTab[interwal];

		index -= 0.5;
		makeRuns(runTab);

		element.tapering1[1] = runTab[recovery];
		element.tapering1[5] = runTab[longRun];
		element.tapering2[1] = runTab[recovery];
		element.tapering2[5] = runTab[restDay];
	}

	if (trainingDaysAWeek == 3) {
		element.base1[1] = runTab[recovery];
		element.base1[3] = runTab[longRun];
		element.base1[5] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.base2[1] = runTab[longRun];
		element.base2[3] = runTab[recovery];
		element.base2[5] = runTab[longRun];



		index += 0.5;
		makeRuns(runTab);

		element.build1[1] = runTab[treshold];
		element.base1[3] = runTab[recovery];
		element.build1[5] = runTab[longRun];

		element.build2[1] = runTab[interwal];
		element.base2[3] = runTab[recovery];
		element.build2[5] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak1[1] = runTab[interwal];
		element.peak1[3] = runTab[recovery];
		element.peak1[5] = runTab[treshold];
		element.peak2[1] = runTab[longRun];
		element.peak2[3] = runTab[treshold];
		element.peak2[5] = runTab[longRun];

		index -= 0.5;
		makeRuns(runTab);

		element.tapering1[1] = runTab[recovery];
		element.tapering1[3] = runTab[longRun];
		element.tapering1[5] = runTab[recovery];
		element.tapering2[1] = runTab[longRun];
		element.tapering2[3] = runTab[recovery];
		element.tapering2[5] = runTab[restDay];
	}

	if (trainingDaysAWeek == 4) {
		element.base1[1] = runTab[recovery];
		element.base1[3] = runTab[longRun];
		element.base1[5] = runTab[recovery];
		element.base1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.base2[1] = runTab[longRun];
		element.base2[3] = runTab[recovery];
		element.base2[5] = runTab[longRun];
		element.base2[6] = runTab[longRun];



		index += 0.5;
		makeRuns(runTab);

		element.build1[1] = runTab[treshold];
		element.base1[3] = runTab[recovery];
		element.base1[5] = runTab[longRun];
		element.build1[6] = runTab[longRun];

		element.build2[1] = runTab[interwal];
		element.base2[3] = runTab[recovery];
		element.build2[5] = runTab[treshold];
		element.build2[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak1[1] = runTab[interwal];
		element.peak1[3] = runTab[recovery];
		element.peak1[5] = runTab[treshold];
		element.peak1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak2[1] = runTab[interwal];
		element.peak2[3] = runTab[longRun];
		element.peak2[5] = runTab[treshold];
		element.peak2[6] = runTab[recovery];

		index -= 0.5;
		makeRuns(runTab);

		element.tapering1[1] = runTab[interwal];
		element.tapering1[3] = runTab[recovery];
		element.tapering1[5] = runTab[longRun];
		element.tapering1[6] = runTab[recovery];

		element.tapering2[1] = runTab[longRun];
		element.tapering2[3] = runTab[recovery];
		element.tapering2[5] = runTab[restDay];
		element.tapering2[6] = runTab[restDay];
	}

	if (trainingDaysAWeek == 5) {
		element.base1[1] = runTab[recovery];
		element.base1[2] = runTab[longRun];
		element.base1[3] = runTab[recovery];
		element.base1[5] = runTab[recovery];
		element.base1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.base2[1] = runTab[treshold];
		element.base2[2] = runTab[recovery];
		element.base2[3] = runTab[longRun];
		element.base2[5] = runTab[recovery];
		element.base2[6] = runTab[longRun];



		index += 0.5;
		makeRuns(runTab);

		element.build1[1] = runTab[recovery];
		element.build1[2] = runTab[treshold];
		element.build1[3] = runTab[recovery];
		element.build1[5] = runTab[longRun];
		element.build1[6] = runTab[longRun];

		element.build2[1] = runTab[interwal];
		element.build2[2] = runTab[recovery];
		element.base2[3] = runTab[longRun];
		element.build2[5] = runTab[treshold];
		element.build2[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak1[1] = runTab[interwal];
		element.peak1[1] = runTab[longRun];
		element.peak1[3] = runTab[treshold];
		element.peak1[5] = runTab[recovery];
		element.peak1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak2[1] = runTab[interwal];
		element.peak2[2] = runTab[recovery];
		element.peak2[3] = runTab[treshold];
		element.peak2[5] = runTab[longRun];
		element.peak2[6] = runTab[treshold];

		index -= 0.5;
		makeRuns(runTab);

		element.tapering1[1] = runTab[interwal];
		element.tapering1[2] = runTab[restDay];
		element.tapering1[3] = runTab[recovery];
		element.tapering1[5] = runTab[longRun];
		element.tapering1[6] = runTab[recovery];

		element.tapering2[1] = runTab[longRun];
		element.tapering2[2] = runTab[restDay];
		element.tapering2[3] = runTab[recovery];
		element.tapering2[5] = runTab[restDay];
		element.tapering2[6] = runTab[restDay];
	}

	if (trainingDaysAWeek == 6) {
		element.base1[0] = runTab[recovery];
		element.base1[1] = runTab[longRun];
		element.base1[2] = runTab[longRun];
		element.base1[3] = runTab[recovery];
		element.base1[5] = runTab[treshold];
		element.base1[6] = runTab[recovery];
		element.base1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.base2[0] = runTab[recovery];
		element.base2[1] = runTab[treshold];
		element.base2[2] = runTab[recovery];
		element.base2[3] = runTab[longRun];
		element.base2[5] = runTab[recovery];
		element.base2[6] = runTab[longRun];



		index += 0.5;
		makeRuns(runTab);

		element.build1[0] = runTab[recovery];
		element.build1[1] = runTab[treshold];
		element.build1[2] = runTab[longRun];
		element.build1[3] = runTab[treshold];
		element.build1[5] = runTab[recovery];
		element.build1[6] = runTab[longRun];

		element.build2[0] = runTab[interwal];
		element.build2[1] = runTab[longRun];
		element.build2[2] = runTab[recovery];
		element.base2[3] = runTab[longRun];
		element.build2[5] = runTab[treshold];
		element.build2[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak1[0] = runTab[interwal];
		element.peak1[1] = runTab[recovery];
		element.peak1[2] = runTab[longRun];
		element.peak1[3] = runTab[treshold];
		element.peak1[5] = runTab[recovery];
		element.peak1[6] = runTab[longRun];

		index += 0.5;
		makeRuns(runTab);

		element.peak2[0] = runTab[interwal];
		element.peak2[1] = runTab[recovery];
		element.peak2[2] = runTab[treshold];
		element.peak2[3] = runTab[longRun];
		element.peak2[5] = runTab[interwal];
		element.peak2[6] = runTab[longRun];

		index -= 1;
		makeRuns(runTab);

		element.tapering1[0] = runTab[recovery];
		element.tapering1[1] = runTab[interwal];
		element.tapering1[2] = runTab[restDay];
		element.tapering1[3] = runTab[recovery];
		element.tapering1[5] = runTab[longRun];
		element.tapering1[6] = runTab[recovery];

		element.tapering2[0] = runTab[recovery];
		element.tapering2[1] = runTab[longRun];
		element.tapering2[2] = runTab[restDay];
		element.tapering2[3] = runTab[recovery];
		element.tapering2[5] = runTab[restDay];
		element.tapering2[6] = runTab[restDay];
	}

}