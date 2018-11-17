#pragma once
#include <string>
#include "TrainingElements.h"
#include "Run.h"
enum type { restDay, recovery, longRun, treshold, interwal };

class Runner {

private:
	std::string name;
	bool isMale;
	int age;
	
	//int distance;	// personal best distance
	int timeIndex;
	int target;	// target distance

	double index; // index for runner, how good runner is
	int trainingDaysAWeek; // based on index score

public:
	Runner();
	Runner(std::string, bool, int, int, double);
	Runner(bool isMale, int SelectedTimeIndex, int SelectedTargetIndex);
	~Runner();

	std::string getName() const;
	bool getIsMale() const;
	int getAge() const;
	double getTime() const;
	double getTarget() const;
	TrainingElements makePhase();

	void makeIndex();
	void calculateTrainingDaysAWeek();

	void makeRuns(Run runTab[5]);

	void createPlan();
	
};