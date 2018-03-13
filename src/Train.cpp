#include "Train.h"

Train::Train(int currentStop, float speed, Line line)
{
    
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
