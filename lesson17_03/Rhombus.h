#pragma once
#include "Quadrangle.h"

class Rhombus : public Quadrangle
{
public:
    Rhombus(unsigned int a, unsigned int A, unsigned int B);

    std::string get_name() override;
};
