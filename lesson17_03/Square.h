#pragma once
#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square(unsigned int a);

    std::string get_name() override;
};
