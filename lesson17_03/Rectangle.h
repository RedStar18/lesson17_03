#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle(unsigned int a, unsigned int b);

    std::string get_name() override;
};
