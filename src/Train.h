#ifndef TRAIN_H_
#define TRAIN_H_

#include <iostream>
#include "Line.h"
#include <unistd.h>

class Train
{
    unsigned int currentStop;
    float speed;
    Line line;
public:
    Train();
    Train(Line line, unsigned int currentStop = 0, float speed = 0);
    float getSpeed();
    int getCurrentStop();
    void go(float desiredSpeed, std::string stopName, string character);
    void stop();
    void setLine(Line l);
    void stay(std::string character);
};

#endif
