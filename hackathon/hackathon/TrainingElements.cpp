#include "TrainingElements.h"
enum type { restDay, recovery, longRun, treshold, interwal };

TrainingElements::TrainingElements()
{
}

TrainingElements::~TrainingElements()
{
}
void TrainingElements::makeRuns(Runner &runner, Run runTab[5])
{
	runTab[interwal] = { 0.1*(runner.index),((80.0 + runner.index * 0.4) / (runner.index - 7.0)) - 0.9, int(runner.index / 2 - 7) };
	runTab[treshold] = { runner.index - 18, ((80.0 + runner.index * 0.4) / (runner.index - 7)) - 0.2, 1 };
	runTab[longRun] = { runner.index - 17.5 + 2.5*runner.target, ((80.0 + runner.index * 0.4) / (runner.index - 7)) + 0.2, 1 }; // todo ponoć
	runTab[recovery] = { (runner.index - 17.5 + 2.5*runner.target)*0.6, ((80.0 + runner.index * 0.4) / (runner.index - 7)) + 0.7, 1 }; // todo
	runTab[restDay] = { 0,0,0 };
}


void TrainingElements::makePhase(Runner &runner)
{
	Run runTab[5];
	makeRuns(runner, runTab);

	// fill in restDays
	for (int i = 0; i < 7; i++)
	{
		base1[i] = runTab[restDay];
		base2[i] = runTab[restDay];

		build1[i] = runTab[restDay];
		build2[i] = runTab[restDay];

		peak1[i] = runTab[restDay];
		peak2[i] = runTab[restDay];

		tapering1[i] = runTab[restDay];
		tapering2[i] = runTab[restDay];
	}

	if (runner.trainingDaysAWeek == 2) {
		base1[1] = runTab[recovery];
		base1[5] = runTab[recovery];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[1] = runTab[longRun];
		base2[5] = runTab[recovery];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[1] = runTab[longRun];
		build1[5] = runTab[recovery];
		build2[1] = runTab[longRun];
		build2[5] = runTab[treshold];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[1] = runTab[longRun];
		peak1[5] = runTab[treshold];
		peak2[1] = runTab[longRun];
		peak2[5] = runTab[interwal];

		runner.index -= 0.5;
		makeRuns(runner, runTab);

		tapering1[1] = runTab[recovery];
		tapering1[5] = runTab[longRun];
		tapering2[1] = runTab[recovery];
		tapering2[5] = runTab[restDay];
	}

	if (runner.trainingDaysAWeek == 3) {
		base1[1] = runTab[recovery];
		base1[3] = runTab[longRun];
		base1[5] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[1] = runTab[longRun];
		base2[3] = runTab[recovery];
		base2[5] = runTab[longRun];



		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[1] = runTab[treshold];
		base1[3] = runTab[recovery];
		build1[5] = runTab[longRun];

		build2[1] = runTab[interwal];
		base2[3] = runTab[recovery];
		build2[5] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[1] = runTab[interwal];
		peak1[3] = runTab[recovery];
		peak1[5] = runTab[treshold];
		peak2[1] = runTab[longRun];
		peak2[3] = runTab[treshold];
		peak2[5] = runTab[longRun];

		runner.index -= 0.5;
		makeRuns(runner, runTab);

		tapering1[1] = runTab[recovery];
		tapering1[3] = runTab[longRun];
		tapering1[5] = runTab[recovery];
		tapering2[1] = runTab[longRun];
		tapering2[3] = runTab[recovery];
		tapering2[5] = runTab[restDay];
	}

	if (runner.trainingDaysAWeek == 4) {
		base1[1] = runTab[recovery];
		base1[3] = runTab[longRun];
		base1[5] = runTab[recovery];
		base1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[1] = runTab[longRun];
		base2[3] = runTab[recovery];
		base2[5] = runTab[longRun];
		base2[6] = runTab[longRun];



		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[1] = runTab[treshold];
		base1[3] = runTab[recovery];
		base1[5] = runTab[longRun];
		build1[6] = runTab[longRun];

		build2[1] = runTab[interwal];
		base2[3] = runTab[recovery];
		build2[5] = runTab[treshold];
		build2[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[1] = runTab[interwal];
		peak1[3] = runTab[recovery];
		peak1[5] = runTab[treshold];
		peak1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak2[1] = runTab[interwal];
		peak2[3] = runTab[longRun];
		peak2[5] = runTab[treshold];
		peak2[6] = runTab[recovery];

		runner.index -= 0.5;
		makeRuns(runner, runTab);

		tapering1[1] = runTab[interwal];
		tapering1[3] = runTab[recovery];
		tapering1[5] = runTab[longRun];
		tapering1[6] = runTab[recovery];

		tapering2[1] = runTab[longRun];
		tapering2[3] = runTab[recovery];
		tapering2[5] = runTab[restDay];
		tapering2[6] = runTab[restDay];
	}

	if (runner.trainingDaysAWeek == 5) {
		base1[1] = runTab[recovery];
		base1[2] = runTab[longRun];
		base1[3] = runTab[recovery];
		base1[5] = runTab[recovery];
		base1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[1] = runTab[treshold];
		base2[2] = runTab[recovery];
		base2[3] = runTab[longRun];
		base2[5] = runTab[recovery];
		base2[6] = runTab[longRun];



		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[1] = runTab[recovery];
		build1[2] = runTab[treshold];
		build1[3] = runTab[recovery];
		build1[5] = runTab[longRun];
		build1[6] = runTab[longRun];

		build2[1] = runTab[interwal];
		build2[2] = runTab[recovery];
		base2[3] = runTab[longRun];
		build2[5] = runTab[treshold];
		build2[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[1] = runTab[interwal];
		peak1[1] = runTab[longRun];
		peak1[3] = runTab[treshold];
		peak1[5] = runTab[recovery];
		peak1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak2[1] = runTab[interwal];
		peak2[2] = runTab[recovery];
		peak2[3] = runTab[treshold];
		peak2[5] = runTab[longRun];
		peak2[6] = runTab[treshold];

		runner.index -= 0.5;
		makeRuns(runner, runTab);

		tapering1[1] = runTab[interwal];
		tapering1[2] = runTab[restDay];
		tapering1[3] = runTab[recovery];
		tapering1[5] = runTab[longRun];
		tapering1[6] = runTab[recovery];

		tapering2[1] = runTab[longRun];
		tapering2[2] = runTab[restDay];
		tapering2[3] = runTab[recovery];
		tapering2[5] = runTab[restDay];
		tapering2[6] = runTab[restDay];
	}

	if (runner.trainingDaysAWeek == 6) {
		base1[0] = runTab[recovery];
		base1[1] = runTab[longRun];
		base1[2] = runTab[longRun];
		base1[3] = runTab[recovery];
		base1[5] = runTab[treshold];
		base1[6] = runTab[recovery];
		base1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[0] = runTab[recovery];
		base2[1] = runTab[treshold];
		base2[2] = runTab[recovery];
		base2[3] = runTab[longRun];
		base2[5] = runTab[recovery];
		base2[6] = runTab[longRun];



		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[0] = runTab[recovery];
		build1[1] = runTab[treshold];
		build1[2] = runTab[longRun];
		build1[3] = runTab[treshold];
		build1[5] = runTab[recovery];
		build1[6] = runTab[longRun];

		build2[0] = runTab[interwal];
		build2[1] = runTab[longRun];
		build2[2] = runTab[recovery];
		base2[3] = runTab[longRun];
		build2[5] = runTab[treshold];
		build2[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[0] = runTab[interwal];
		peak1[1] = runTab[recovery];
		peak1[2] = runTab[longRun];
		peak1[3] = runTab[treshold];
		peak1[5] = runTab[recovery];
		peak1[6] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak2[0] = runTab[interwal];
		peak2[1] = runTab[recovery];
		peak2[2] = runTab[treshold];
		peak2[3] = runTab[longRun];
		peak2[5] = runTab[interwal];
		peak2[6] = runTab[longRun];

		runner.index -= 1;
		makeRuns(runner, runTab);

		tapering1[0] = runTab[recovery];
		tapering1[1] = runTab[interwal];
		tapering1[2] = runTab[restDay];
		tapering1[3] = runTab[recovery];
		tapering1[5] = runTab[longRun];
		tapering1[6] = runTab[recovery];

		tapering2[0] = runTab[recovery];
		tapering2[1] = runTab[longRun];
		tapering2[2] = runTab[restDay];
		tapering2[3] = runTab[recovery];
		tapering2[5] = runTab[restDay];
		tapering2[6] = runTab[restDay];
	}

}