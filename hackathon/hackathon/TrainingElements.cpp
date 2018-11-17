#include "TrainingElements.h"
enum type { restDay, recovery, longRun, treshold, interwal };

TrainingElements::TrainingElements()
{
}

TrainingElements::~TrainingElements()
{
}
void TrainingElements::makeRuns(Runner &runner,Run runTab[5])
{
	runTab[interwal]={ 0.1*(runner.index),((80.0 + runner.index * 0.4) / (runner.index - 7.0)) - 0.9, int(runner.index / 2 - 7) };
	runTab[treshold]={ runner.index - 18, ((80.0 + runner.index * 0.4) / (runner.index - 7)) - 0.2, 1 };
	runTab[longRun]={ runner.index - 17.5+2.5*runner.target, ((80.0 + runner.index * 0.4) / (runner.index - 7)) + 0.2, 1 }; // todo ponoć
	runTab[recovery]={ (runner.index - 17.5 + 2.5*runner.target)*0.6, ((80.0 + runner.index * 0.4) / (runner.index - 7)) + 0.7, 1 }; // todo
	runTab[restDay] = { 0,0,0 };
}

void TrainingElements::makePhase(Runner &runner)
{
	Run runTab[5];
	makeRuns(runner, runTab);


	if (runner.trainingDaysAWeek == 2) {
		base1[1] = runTab[longRun];
		base1[5] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		base2[1] = runTab[longRun];
		base2[5] = runTab[longRun];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		build1[1] = runTab[longRun];
		build1[5] = runTab[treshold];
		build1[1] = runTab[longRun];
		build1[5] = runTab[treshold];

		runner.index += 0.5;
		makeRuns(runner, runTab);

		peak1[1] = runTab[longRun];
		peak1[5] = runTab[treshold];
		peak2[1] = runTab[longRun];
		peak2[5] = runTab[treshold];

		runner.index -= 0.5;
		makeRuns(runner, runTab);

		tapering1[1] = runTab[recovery];
		tapering1[5] = runTab[longRun];
		tapering2[1] = runTab[recovery];
		tapering2[5] = runTab[recovery];
	}
}
