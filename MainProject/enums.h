#pragma once

enum Colors		//Не хочу использовать static_cast в меню
{
	BLUE = 1,
	BRIGHT_BLUE,
	YELLOW,
	BRIGHT_YELLOW,
	MAGENTA,
	CYAN,
	DEFAULT,
};


enum Menu		//Не хочу использовать static_cast в меню
{
	SEARCHING = 1,
	SETTINGS,
	EXIT,
};

enum Settings	//Не хочу использовать static_cast в меню
{
	LANGUAGE = 1,
	COLOR,
	GENERATE,
	RESIZE,
	MAIN_MENU
};

enum Searching
{
	INCREM = 1,
	JUMP,
	INDEX,
	BINARY,
	MENU
};