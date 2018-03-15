#ifndef STOP_H_
#define STOP_H_

#include <iostream>
#include <string>
#include "Semaphore.h"

using namespace std;

class Stop
{
    string name;
    int distanceToNext;
    Semaphore S;
public:
    Stop();
    Stop(string n, int distance, unsigned int platforms);
    string getName();
    void setName(string n);
    int getDistanceToNext();
    void setDistanceToNext(int distance);
};

#endif
