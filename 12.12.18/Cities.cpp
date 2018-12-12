#include "Cities.h"

void Cities::loadFromFileCity(string dir, string fileName)
{
	//city.insert(make_pair(0, "text"));
	fstream file(dir + "\\" + fileName, ios::in);
	if (!file)
		throw exception("Файл не найден!");
	while (!file.eof()) {
		string s;
		string s1;
		int g = 0;
		getline(file, s);
		if (s.length() > 0) 
		{
			g = stoi(s.substr(0, s.find(';') ));
			//cout << s;
		//	break;
			s = s.substr(s.rfind(';') + 1);
			
			city.insert(make_pair( s,g));
		}
	}
	/*for (auto it = begin(city); it != end(city); it++) {
		cout << it->first << " " << it->second << endl;
	}*/
}

void Cities::loadFromFileCountry(string dir, string fileName)
{
	
	fstream file(dir + "\\" + fileName, ios::in);
	if (!file)
		throw exception("Файл не найден!");
	while (!file.eof()) {
		string s;
		string s1;
		int g = 0;
		getline(file, s);
		if (s.length() > 0)
		{
			g = stoi(s.substr(0, s.find(';')));			
			s = s.substr(s.rfind(';') + 1);
			country.insert(make_pair( g,s));
		}
	}
	for (auto it = begin(country); it != end(country); it++) {
		cout << it->first << " " << it->second << endl;
	}

}

void Cities::find(string c)
{
	if(city.find(c)==)
	
}



