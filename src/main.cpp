#include "Train.h"

// void start(Train t){
//     t.go();
// }

int main() {
    Line C3("C3");
    C3.addStop(Stop("a", 10, 0));
    C3.addStop(Stop("b", 10, 1));
    C3.addStop(Stop("c", 10, 2));
    C3.addStop(Stop("d", 10, 3));
    C3.addStop(Stop("e", 10, 4));
    C3.addStop(Stop("f", 10, 5));
    C3.addStop(Stop("g", 10, 6));
    C3.addStop(Stop("h", 10, 7));
    Train train1(C3);
    std::cout << train1.getCurrentStop() << '\n';
    train1.go(2, "b");

    ///////////// APLICACION DE HILOS ////////////////
    // Train t1;
    // std::thread threadTrain1(start, t1);
    // Train t2;
    // std::thread threadTrain2(start, t2);
    // threadTrain1.join();
    // threadTrain2.join();
}
