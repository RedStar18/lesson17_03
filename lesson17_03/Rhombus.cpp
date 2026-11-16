#include "Rhombus.h"

Rhombus::Rhombus(unsigned int a, unsigned int A, unsigned int B) : Quadrangle(a, a, a, a, A, B, A, B) {}

std::string Rhombus::get_name()
{
    return "Ромб";
}
