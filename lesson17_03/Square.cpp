#include "Square.h"
#include <iostream>

Square::Square(unsigned int a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {}

std::string Square::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Квадрат";
}
