#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle
{
public:

    EquilateralTriangle(unsigned int a);

    std::string get_name() override;
};
