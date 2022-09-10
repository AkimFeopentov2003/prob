//
// Created by leksil on 08.09.22.
//

#ifndef EQUATION_EQUATION_H
#define EQUATION_EQUATION_H


class equation {
private:
    int a, b, c;

    double x1;
    double x2;
    int numOfSolv;

public:

    int getA() { return a; }

    int getB() { return b; }

    int getC() { return c; }

    void setA(int newA) { a = newA; }

    void setB(int newB) { b = newB; }

    void setC(int newC) { c = newC; }

    double getX1() { return x1; }
    double getX2() { return x2; }

    void setX1(double newX) { x1 = newX; }
    void setX2(double newX) { x2 = newX; }

    int getNum() {return numOfSolv;}
    void setNum(int newNum) { numOfSolv = newNum;}

};


#endif //EQUATION_EQUATION_H
