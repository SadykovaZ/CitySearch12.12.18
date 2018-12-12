#include "CityConsole.h"

void CityConsole::start()
{
	try {
		c.loadFromFileCountry("C:\\Users\\СадыковаЖ\\Desktop", "country.csv");
	}
	catch (exception&e) {
		cout << e.what();
		cout << "\nНевозможно продолжить играть\n";
		system("pause");
		exit(0);
	}
}

void CityConsole::game()
{

}
