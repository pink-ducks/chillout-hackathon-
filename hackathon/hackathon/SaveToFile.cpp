#include "SaveToFile.h"

CsvFile::CsvFile(std::string filePath) 
{
	this->filePath = filePath;
	this->myFile.open(filePath, std::ios::out);

}

CsvFile::~CsvFile()
{
	myFile.close();
}

void CsvFile::write(std::vector<Week>& weeks)
{
	if (myFile.is_open())
	{
		for (int i = 0; i < weeks.size(); i++) 
		{
			myFile << "Week " << i;
			myFile << "Monday" << "Tuesday" << "Wednesday" << "Thursday" << "Friday" << "Saturday" << "Sunday" << std::endl;
			myFile << weeks[i].monday << weeks[i].tuesday << weeks[i].wednesday
				<< weeks[i].thursday << weeks[i].friday << weeks[i].saturday
				<< weeks[i].sunday << std::endl << std::endl;
		}
	}
	else
	{
		// problem with opening file
	}
}
