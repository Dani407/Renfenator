#include "Stop.h"

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
