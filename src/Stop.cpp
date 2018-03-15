#include "Stop.h"

Stop::Stop(){}

Stop::Stop(string n, int distance/*, unsigned int platforms*/)
    :
    name(n),
    distanceToNext(distance)
    {/*
        for (size_t i = 0; i < platforms; i++) {
            S.notify();
        }
    */}

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
