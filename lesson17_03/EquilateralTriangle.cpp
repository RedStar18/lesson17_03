#include "EquilateralTriangle.h"
#include <iostream>

EquilateralTriangle::EquilateralTriangle(unsigned int a) : Triangle(a, a, a, 60, 60, 60) {}

std::string EquilateralTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Равносторонний треугольник";
}
