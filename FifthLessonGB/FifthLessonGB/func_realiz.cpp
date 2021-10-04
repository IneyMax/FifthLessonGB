#include <iostream>
#include "FifthLessonGB.h"


// ДЗ 5 п.1 (тип массива и его размер не указан, в связи с чем использовал std::array):
void print_double_array(const std::array<double, 10> &my_array, int size_array)
{
    for (const auto element : my_array)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

// ДЗ 5 п.2:
void change_array(std::array<int, 10> &my_array)
{
    for (auto &element : my_array)
    {
        if (element == 0)
        {
            element = 1;
        }
        else
            element = 0;
    }
}

// ДЗ 5 п.2 (вывод массива):
void print_array(const std::array<int, 10> &my_array)
{
    for (const auto element : my_array)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

// ДЗ 5 п.3:
void filling_array(std::array<int, 8> &my_array)
{
    const int size_array = static_cast<int>(my_array.size());
    int index {0};
    while (index < size_array)
    {
        my_array.at(index) = (index * 3) + 1;
        index ++;
    }
    for (const auto element : my_array)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

// ДЗ 5 п.4: (Кольцо вычетов)
void cicle_bias(std::array<int, 10> &my_array, int bias)
{
    std::array<int, 10> copy_array = my_array;
    const int size_array = static_cast<int>(my_array.size());
    int index {};
    if (bias > 0)
    {
        while (index < size_array)
        {
            my_array[(bias + index) % size_array] = copy_array[index];
            index ++;
        }
    }
    
    index = 0;
    if (bias < 0)
    {
        while (index < size_array)
        {
            my_array[(index + abs((size_array + bias))) % size_array] = copy_array[index];
            index ++;
        }
    }
}

// ДЗ 5 п.5:
bool check_balance(std::array<int, 10> &my_array)
{
    int border {};
    const int size_array = static_cast<int>(my_array.size());
    while (border < size_array)
    {
        int left_rezult {};
        int right_rezult {};
        int first_index {};
        while (first_index <= border)
        {
            left_rezult += my_array[first_index];
            first_index ++;
        }
        int second_index = border + 1;
        while (second_index < size_array)
        {
            right_rezult += my_array[second_index];
            second_index ++;
        }
        if (left_rezult == right_rezult)
        {
            std::cout <<"Border index: " << border
            << "\nLeft result: " << left_rezult
            << "\nRight rezult: " << right_rezult << "\n";
            return true;
        }
        /*
        std::cout <<"Border index: " << border
            << "\nLeft result: " << left_rezult
            << "\nRight rezult: " << right_rezult << "\n";
            */
        border ++;
    }
    return false;
}





