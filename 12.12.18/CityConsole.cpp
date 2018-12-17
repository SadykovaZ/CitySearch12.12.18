#include "CityConsole.h"

void CityConsole::start(string dir)
{
	try {
		
		c.loadFromFile(dir);
	
	}
	catch (exception&e) {
		cout << e.what();
		cout << "\nНевозможно продолжить играть\n";
		system("pause");
		exit(0);
	}

	game();
}

void CityConsole::game()
{
	string name;

	while (1) {
		system("cls");
		cout << "Введите название города: ";
		cin >> name;
		try {
			c.find(name);
		}
		catch (exception&e) {
			cout << e.what();

		}
		system("pause");
	}
}
