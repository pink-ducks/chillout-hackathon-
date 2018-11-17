#include "TrainingElements.h"

TrainingElements::TrainingElements()
{
}

TrainingElements::~TrainingElements()
{
}

void TrainingElements::makePhase(Runner &runner)
{
	Run interwal{0.1*runner.index,((80.0 + runner.index * 0.4) / (runner.index - 7)) - 0.9, runner.index/2-7 };
	Run treshold{runner.index - 18, ((80.0 + runner.index * 0.4) / (runner.index - 7)) - 0.2, 1 };
	Run longRun{ runner.index - 15, ((80.0 + runner.index * 0.4) / (runner.index - 7)) - 0.2, 1 };

	//if (runner.trainingDaysAWeek == 2){
		//base1[1] =   
}
