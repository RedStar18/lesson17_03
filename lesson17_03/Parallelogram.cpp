#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(unsigned int a, unsigned int b, unsigned int A, unsigned int B) : Quadrangle(a, b, a, b, A, B, A, B) {}

std::string Parallelogram::get_name()
{
    setlocale(LC_ALL, "RUS");
    return "Параллелограмм";
}
