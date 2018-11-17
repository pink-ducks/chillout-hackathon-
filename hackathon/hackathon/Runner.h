#pragma once
#include <string>

class Runner {

private:
	std::string name;
	bool isMale;
	int age;
	
	//int distance;	// personal best distance
	int timeIndex;
	int target;	// target distance

	int index; // index for runner, how good runner is
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

	void makeIndex();
	void calculateTrainingDaysAWeek();

	friend class TrainingElements;
};