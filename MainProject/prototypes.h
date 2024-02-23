#pragma once
#include <vector>


int random(int min, int max);
void main_menu(std::vector<int>& main_vector, Colors& color);
void set_color(Colors& color);
void print_matrix(std::vector<int>& main_vector, int len);
void print_matrix(std::vector<int>& main_vector, int len, int index);
void random_set(std::vector<int>& main_vector, int min, int max);
void greetings();
void loading(int time); 
int increm_search(std::vector<int> const& main_vector, int element);
int jump_search(std::vector<int> const& main_vector, int element);
int binary_search(std::vector<int> const& main_vector, int element); //циклический
int binary_search(std::vector<int> const& main_vector, int element, int left, int right, int& step); //рекурсивный
