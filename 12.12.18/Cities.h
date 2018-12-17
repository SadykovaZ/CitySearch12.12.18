#pragma once
#include <string>
#include <list>
#include <iostream>
#include <map>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <Windows.h>

using namespace std;

class Cities
{
	map <string, string> cities;
	map <string, string> country;

	string dir;

public:
	
	void setDir(string d) { this->dir = d; }
	string getDir() { return dir; }

	void loadFromFile(string dir);
	
	void find(string c);
};
