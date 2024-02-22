#include "all_pack.h"


int main()
{
	setlocale(0, "");
	srand(time(0));

	std::vector<int> main_vector{};
	main_vector.resize(100);
	random_set(main_vector, 1, 999);
	print_show(main_vector,10,45);

	return 0;
}