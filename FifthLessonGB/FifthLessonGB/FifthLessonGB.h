#pragma once
#include <array>

// ДЗ 5 п.1 (тип массива и его размер не указан, в связи с чем использовал std::array) :
void print_double_array(const std::array<double, 10> &my_array, int size_array);

// ДЗ 5 п.2:
void change_array(std::array<int, 10> &my_array);

// ДЗ 5 п.2 (вывод массива):
void print_array(const std::array<int, 10> &my_array);

// ДЗ 5 п.3:
void filling_array(std::array<int, 8> &my_array);

// ДЗ 5 п.4: (Кольцо вычетов)
void cicle_bias(std::array<int, 10> &my_array, int bias);

// ДЗ 5 п.5:
bool check_balance(std::array<int, 10> &my_array);


