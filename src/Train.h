#ifndef TRAIN_H_
#define TRAIN_H_

#include <iostream>
#include "Line.h"

class Train
{
    int currentStop;
    float speed;
    Line line;
public:
    Train();
    Train(int currentStop, float speed, Line line);
    float getSpeed();
    int getCurrentStop();
    void go(float desiredSpeed);
    void stop();
    void setLine(Line l);
};

#endif
