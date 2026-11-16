// lesson17_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"

void print_info(Figure* fig);

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    Triangle triangle = Triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle = RightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isosceles_triangle = IsoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle = EquilateralTriangle(30);

    Quadrangle quadrangle = Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram = Parallelogram(20, 30, 30, 40);
    class Rectangle rectangle = class Rectangle(10, 20);
    Square square = Square(20);
    Rhombus rhombus = Rhombus(30, 30, 40);

    print_info(&triangle);
    print_info(&right_triangle);
    print_info(&isosceles_triangle);
    print_info(&equilateral_triangle);

    print_info(&quadrangle);
    print_info(&parallelogram);
    print_info(&rectangle);
    print_info(&square);
    print_info(&rhombus);

    return 0;
}

void print_info(Figure* fig)
{
    std::cout << fig->get_name() << ":\n" << "Стороны: " << fig->get_sides_info() << "\n" << "Углы: " << fig->get_angles_info() << "\n\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
