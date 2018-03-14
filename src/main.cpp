#include "Train.h"
#include <thread>

void start(Train t, float desiredSpeed, std::string stopName, std::string character){
    t.go(desiredSpeed, stopName, character);
}

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
    Train train2(C3,3);

    ///////////// APLICACION DE HILOS ////////////////
    std::thread threadTrain1(start, train1, 2, "c", ".");
    std::thread threadTrain2(start, train2, 3, "g", "=");
    threadTrain1.join();
    threadTrain2.join();
}
