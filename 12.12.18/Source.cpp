#include <string>
#include <iostream>
#include"CityConsole.h"
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	CityConsole c;
	c.start("C:\\Users\\СадыковаЖ\\Desktop");

	system("pause");
}
//class A {};
//
//class B :public A {
//
//};
//
//void main()
//{
//	A *b = new B;
//	int x = 5;
//	//double y=(double)x;
//	double y = static_cast<double>(x);
//	A* y = static_cast<A*>(b);
//
//
//	const string *s = new string("123");
//	string *s2 = const_cast<string*>(s);
//	s2->push_back('1');
//	cout << *s;
//
//	dynamic_cast<>;
//
//	reinterpret_cast;
//
//	//const_cast; //ñíÿòèå ñ êîíñòàíòíîñòè ññûëêè èëè óêàçàòåëÿ
//
//
//
//	system("pause");
//}
