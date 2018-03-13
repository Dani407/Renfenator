#include "Train.h"

Train::Train()
{
    currentStop = 0;
    speed = 0;
}

Train::Train(Line line, unsigned int currentStop, float speed)
{
    this->currentStop = currentStop;
    this->speed = speed;
    this->line = line;
}

float Train::getSpeed()
{
    return speed;
}

int Train::getCurrentStop()
{
    return currentStop;
}

void Train::go(float desiredSpeed, std::string stopName)
{
    speed = desiredSpeed;
    std::cout << "Starting from stop: " << currentStop << '\n';
    for (size_t i = currentStop; i < line.find(stopName)->getStopNumber(); i++) {
        sleep(line.getStops()[i].getDistanceToNext()/speed);
        std::cout << "We've arrived to: " << line.getStops()[i+1].getName() << '\n';
        sleep(10);
    }
}

void Train::stop()
{
    speed = 0;
}

void Train::setLine(Line l)
{
    line = l;
}
