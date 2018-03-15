#include "Train.h"
#include <thread>

void start(Train* t, float desiredSpeed, std::string stopName, std::string character){
    t->go(desiredSpeed, stopName, character);
}

int main() {
    Line* C3 = new Line("C3");
    C3->addStop(new Stop("a", 10));
    C3->addStop(new Stop("b", 10));
    C3->addStop(new Stop("c", 10));
    C3->addStop(new Stop("d", 10));
    C3->addStop(new Stop("e", 10));
    C3->addStop(new Stop("f", 10));
    C3->addStop(new Stop("g", 10));
    C3->addStop(new Stop("h", 10));
    Train* train1 = new Train("T1",C3);
    Train* train2 = new Train("T2",C3);

    ///////////// APLICACION DE HILOS ////////////////
    std::thread threadTrain1(start, train1, 2, "d", ".");
    std::thread threadTrain2(start, train2, 4, "e", "=");
    threadTrain1.join();
    threadTrain2.join();
}
