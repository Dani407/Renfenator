#include "Stop.h"

Stop::Stop(){}

Stop::Stop(string n, int distance, unsigned int stopNumber)
    :
    name(n),
    distanceToNext(distance),
    stopNumber(stopNumber) {}

unsigned int Stop::getStopNumber()
{
    return stopNumber;
}

string Stop::getName()
{
    return name;
}

void Stop::setName(string n)
{
    this->name = n;
}

int Stop::getDistanceToNext()
{
    return distanceToNext;
}

void Stop::setDistanceToNext(int distance)
{
    this->distanceToNext = distance;
}
