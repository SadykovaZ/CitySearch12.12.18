#include "CityConsole.h"

void CityConsole::start()
{
	try {
		c.loadFromFileCountry("C:\\Users\\���������\\Desktop", "country.csv");
	}
	catch (exception&e) {
		cout << e.what();
		cout << "\n���������� ���������� ������\n";
		system("pause");
		exit(0);
	}
}

void CityConsole::game()
{

}
