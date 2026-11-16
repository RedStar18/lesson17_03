#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(unsigned int a, unsigned int b, unsigned int A, unsigned int B);

    std::string get_name() override;
};
