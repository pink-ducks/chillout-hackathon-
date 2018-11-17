#pragma once
enum type {restDay, recovery, longRun, treshold, interwal};

struct Run {
	double distance;
	double pace;
	int repetition;
};