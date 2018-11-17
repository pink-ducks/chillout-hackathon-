#pragma once
#include <string>

using namespace std;

struct Week
{
	string monday;
	string tuesday;
	string wednesday;
	string thursday;
	string friday;
	string saturday;
	string sunday;

	Week::Week(string monday, string tuesday, string wednesday, string thursday, string friday, string saturday, string sunday)
	{
		this->monday = monday;
		this->tuesday = tuesday;
		this->wednesday = wednesday;
		this->thursday = thursday;
		this->friday = friday;
		this->saturday = saturday;
		this->sunday = sunday;
	}
};