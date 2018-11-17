#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "defines.hpp"

class CsvFile
{
private:
	std::string filePath;
	std::fstream myFile;

public:
	CsvFile(std::string filePath);
	~CsvFile();
	void write(std::vector<Week>& weeks);

};