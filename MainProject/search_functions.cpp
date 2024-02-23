#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <random>


int increm_search(std::vector<int> const& main_vector, int element)
{
	bool flag{ false };
	for (int index{ 0 }; index < main_vector.size(); index++)
	{
		if (main_vector.at(index) == element)
		{
			flag = true;
			return index;
		}
	}
	if (!flag)
		return -1;
}

int jump_search(std::vector<int> const& main_vector, int element)
{
	int step = sqrt(main_vector.size());
	int last_step{ 0 };

	while (main_vector.at(min(step, main_vector.size())) < element)
	{
		last_step = step;
		step += sqrt(main_vector.size());
		if (last_step >= main_vector.size())
			return -1;
	}
	while (main_vector.at(last_step) < element)
	{
		last_step++;
		if (last_step == min(step, main_vector.size()))
			return -1;
	}
	if (main_vector.at(last_step) == element)
		return last_step;
	else
		return -1;
}

int binary_search(std::vector<int> const& main_vector, int element) //циклический
{
	int left{ 0 };
	int right = (main_vector.size() - 1);
	int middle{ 0 };
	int step{ 0 };
	bool flag{ false };

	while (left <= right)
	{
		step++;
		middle = (left + right) / 2;
		if (element == main_vector.at(middle))
		{
			flag = true;
			return middle;
		}
		if (element < main_vector.at(middle))
			right = middle - 1;
		else
			left = middle + 1;
	}
	if (!flag)
		return -1;
}

int binary_search(std::vector<int> const& main_vector, int element, int left, int right, int& step)
{
	step++;
	int middle{ (left + right) / 2 };
	if (left > right)
		return -1;
	if (element == main_vector.at(middle))
		return middle;
	if (element < main_vector.at(middle))
		return   binary_search(main_vector, element, left, middle - 1, step);
	else
		return   binary_search(main_vector, element, left, middle + 1, step);
}


