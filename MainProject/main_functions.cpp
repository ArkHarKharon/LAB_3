#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <random>

#include "enums.h"
#include "termcolor.hpp"
#include "prototypes.h"



int random(int min, int max)
{
	int number = min + rand() % (max - min + 1);
	return number;
}

void print_matrix(std::vector<int> &main_vector,int len)
{
	std::cout << "\t\t\t    ---------------МАТРИЦА---------------\n\n\t";
	int counter{ 0 };
	for (auto element : main_vector)
	{
		if (counter == len)
		{
			std::cout << "\n\n\t";
			counter = 0;
		}

		if (element > 99)
			std::cout << element << "\t";
		else if (element > 9 and element < 100)
			std::cout << element << " \t";
		else if (element < 10)
			std::cout << " " << element << " \t";
		counter++;
	}
	std::cout << "\n\n\t\t\t    ---------------МАТРИЦА---------------\n\n\n\n";
}

void print_show(std::vector<int>& main_vector, int len, int index)
{
		std::cout << "\t\t\t    ---------------МАТРИЦА---------------\n\n\t";
		int counter{ 0 };
		for (auto element : main_vector)
		{
			if (main_vector.at(index) == element)
				std::cout << termcolor::green;

			if (counter == len)
			{
				std::cout << "\n\n\t";
				counter = 0;
			}

			if (element > 99)
				std::cout << element << "\t";
			else if (element > 9 and element < 100)
				std::cout << element << " \t";
			else if (element < 10)
				std::cout << " " << element << " \t";
			std::cout << termcolor::reset;
			counter++;
		}
		std::cout << "\n\n\t\t\t    ---------------МАТРИЦА---------------\n\n\n\n";
}


void random_set(std::vector<int> &main_vector, int min, int max)
{
	for (int index{ 0 }; index < main_vector.size(); index++)
		main_vector.at(index) = random(min,max);
}

void main_menu(std::vector<int>&main_vector)
{
	std::cout
		<< "\tВ этой лабе ты не увидишь ни векторов, ни, чтоб их, обычных динамических массивов.\n"
		<< "Ты можешь спросить,мол, какого хера ты не накатил такой функционал\n"
		<< "Более того, ты будешь прав(-a): вектора это тема\n"
		<< "Но есть одно НО: да поебать мне(-___-), я делаю по-красоте, скоро ты увидишь)))";
	Sleep(7000);
	system("cls");

	std::cout << "\tА хотя не, я передумал: будут тебе вектора)))";
	Sleep(3000);
	system("cls");

	std::cout
		<< "Для начала давай разберемся с некоторыми мелочами\n"
		<< "Во первых, рекомендую развернуть консоль на половину экрана, так красивее всего";
	Sleep(4000);
	system("cls");
	
	std::cout
		<< "Ты можешь играться с этой программой как хочешь -- я не хочу ограничивать тебя\n"
		<< "Но ты должен(-на) понимать -- хоть функционал и будет работать (наверное) при любых\n"
		<< "твоих шалостях, интерфейс подогнан под рекомендуемые значения";
	Sleep(6000);
	system("cls");

	std::cout
		<< "Но ладно,даавай разберемся в матрицей\n"
		<< "Введи длину и шириину матрицы через пробел (рекомендую 10х10): ";

	int len, width;
	std::cin >> len >> width;
	system("cls");

	int volume{ len * width };
	main_vector.resize(volume);

	std::cout
		<< "Матрица " << len << "x" << width << " была создан!\n"
		<< "Ты сможешь изменить ее позже, но лучше не переусердствуй с этим!";
	Sleep(5000);
	system("cls");

	std::cout << "Чтож, прелюдия соблюдена, можем начинать))";
	Sleep(2000);
	system("cls");

		
	random_set(main_vector, 1, 999);
	int answer{};
	do
	{
		print_matrix(main_vector, len);

		std::cout
			<< "\t\t\t    ----------------МЕНЮ----------------\n"
			<< "1) Меню поиска элемента\n"
			<< "2) Настройки\n"
			<< "3) Выход\n";
	} while (1);
}