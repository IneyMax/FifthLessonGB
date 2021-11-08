#include "FifthLessonGB.h"
#include <iostream>

int main()
{
    // ДЗ 5 п.1:
    const std::array<double, 10> double_array {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    print_double_array(double_array, 10);
    
    // ДЗ 5 п.2:
    std::array<int, 10> mono_array {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    print_array(mono_array);
    change_array(mono_array);
    print_array(mono_array);

    // ДЗ 5 п.3:
    std::array<int, 8> eight_array;
    filling_array(eight_array);

    // ДЗ 5 п.4 (Для вывода используется функция print_array из ДЗ 5 п.2): 
    std::array<int, 10> int_array {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_array(int_array);
    int bias {-7};
    cicle_bias_copy_array(int_array, bias);
    print_array(int_array);
    
    // ДЗ 5 п.5:
    std::array<int, 10> check_array {1, 1, 0, 0, 1, 0, 1, 1, 0, 1};
    std::cout << check_balance(check_array);
    return 0;
}










