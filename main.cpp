#include <iostream>
#include "Solver.h"
#include "reader.h"
#include "equation.h"
#include "writer.h"

class App
{

public:
    reader appReader;
    Solver appSolver;
    writer appWriter;
    equation appEquation;

    void startApp()
    {
        bool exit = false;
        while(!exit)
        {
            appWriter.newSolve();

            for(int index = 1; index <= 3; index++)
                appReader.readRatio(index, &appEquation);

            appSolver.toSolve(&appEquation);

            appWriter.writeDes(appEquation.getX1(), appEquation.getX2(), appEquation.getNum());

            exit = appReader.continueSolve();
        }
    }

};

int main() {
    App *app = new App;
    app->startApp();

    return 0;
}
