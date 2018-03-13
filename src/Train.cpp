#include "Train.h"

Train::Train()
{
    currentStop = 0;
    speed = 0;
}

Train::Train(Line line, int currentStop, float speed)
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

void Train::go(float desiredSpeed)
{
    speed = desiredSpeed;
}

void Train::stop()
{
    speed = 0;
}

void Train::setLine(Line l)
{
    line = l;
}
