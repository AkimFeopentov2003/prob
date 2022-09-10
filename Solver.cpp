//
// Created by leksil on 08.09.22.
//

#include "Solver.h"
#include "cmath"

void Solver::toSolve(equation *eq) {
    double a = eq->getA(), b = eq->getB(), c = eq->getC();

    if(a == 0 and b == 0 and c == 0)
    {
        eq->setNum(0);
        return;
    }

    double D = b * b - 4 * a * c;
    if(D < 0)
    {
        eq->setNum(0);
        return;
    }
    else if(D > 0)
    {
        eq->setX1((-b - sqrt(D))/ (2 * a));
        eq->setX2((-b + sqrt(D))/ (2 * a));
        eq->setNum(2);
    }
    else if(D == 0 )
    {
        if(b != 0)
            eq->setX1(-b / 2 * a);
        else
        {
            eq->setX1(b / 2 * a);
        }

        eq->setNum(1);
    }
    else
        eq->setNum(0);

}
