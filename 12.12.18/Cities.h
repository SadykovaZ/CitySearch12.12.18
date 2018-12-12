#pragma once
#include<string>
#include<list>
#include<iostream>
#include<map>
#include<fstream>
using namespace std;
class Cities
{
	multimap<string,int> city;
	multimap<int, string> country;
public:
	
	void loadFromFileCity(string dir, string fileName);
	void loadFromFileCountry(string dir, string fileName);
	void find(string c);
};

