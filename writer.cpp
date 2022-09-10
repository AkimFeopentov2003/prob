//
// Created by leksil on 08.09.22.
//

#include "writer.h"
#include <iostream>

void writer::newSolve() {
    std::cout << "Ввод нового уравнения вида ax^2 + bx + c = 0" << std::endl;
}

void writer::writeDes(double x1, double x2, int num) {
    if(num == 2)
    {
        std::cout << "Решение:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    else if(num == 1)
    {
        std::cout << "Решение:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
    }
    else
        std::cout << "Решения нет(" << std::endl;

}


