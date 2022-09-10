//
// Created by leksil on 08.09.22.
//

#ifndef EQUATION_READER_H
#define EQUATION_READER_H
#include "equation.h"

class reader {
private:
    int a, b, c;
public:
    int readRatio(int index, equation *eq);
    bool continueSolve();
};


#endif //EQUATION_READER_H
