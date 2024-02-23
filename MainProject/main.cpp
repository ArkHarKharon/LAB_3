#include "all_pack.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	std::vector<int> main_vector{};
	Colors menu_color{ DEFAULT };

	main_menu(main_vector, menu_color);
	return 0;
}