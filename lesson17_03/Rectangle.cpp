#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(unsigned int a, unsigned int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {}

std::string Rectangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Прямоугольник";
}
