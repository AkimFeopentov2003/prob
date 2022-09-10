//
// Created by leksil on 08.09.22.
//

#include "reader.h"
#include "equation.h"
#include <iostream>

int reader::readRatio(int index, equation *eq) {
    int temp;
    switch (index) {
        case 1:
            std::cout << "Введите коэффициент a = ";
            std::cin >> temp;
            eq->setA(temp);
            break;
        case 2:
            std::cout << "Введите коэффициент b = ";
            std::cin >> temp;
            eq->setB(temp);
            break;
        case 3:
            std::cout << "Введите коэффициент c = ";
            std::cin >> temp;
            eq->setC(temp);
            break;
    }
    return 0;
}

bool reader::continueSolve() {
    std::cout << "Новое уравнение(y), Завершить(n)" << std:: endl;
    char temp = ' ';

    while(temp != 'y' and temp != 'n')
    {
        std::cout << "->";
        std:: cin >> temp ;
    }

    if(temp == 'y')
        return false;
    else
        return true;
}
