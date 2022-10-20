#include <iostream>
#include "..\GreeterLib\Greeter.h"


int main()
{
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");

	std::cout << "Задача 1. Статическая библиотека\n";
	std::cout << "--------------------------------\n" << std::endl;
	Greeter gr;
	std::string userName;
	std::cout << "Введите имя: "; std::cin >> userName;
	std::cout << gr.greet(userName) << std::endl;

	system("pause"); // Команда задержки экрана

	return 0;
}

/*
Пример работы программы
Консоль
Введите имя: Владислав
Здравствуйте, Владислав!
*/
