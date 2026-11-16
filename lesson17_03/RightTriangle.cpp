#include "RightTriangle.h"
#include <iostream>

RightTriangle::RightTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int A, unsigned int B) : Triangle(a, b, c, A, B, 90) {}

std::string RightTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Прямоугольный треугольник";
}
