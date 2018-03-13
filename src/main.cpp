#include "Train.h"

int main() {
    Train train1;
    Line C3("C3");
    C3.addStop(Stop("a", 10, 0));
    C3.addStop(Stop("b", 10, 1));
    C3.addStop(Stop("c", 10, 2));
    C3.addStop(Stop("d", 10, 3));
    C3.addStop(Stop("e", 10, 4));
    C3.addStop(Stop("f", 10, 5));
    C3.addStop(Stop("g", 10, 6));
    C3.addStop(Stop("h", 10, 7));
}
