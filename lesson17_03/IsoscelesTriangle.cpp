#include "IsoscelesTriangle.h"
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(unsigned int a, unsigned int b, unsigned int A, unsigned int B) : Triangle(a, b, a, A, B, A) {}

std::string IsoscelesTriangle::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Равнобедренный треугольник";
}
