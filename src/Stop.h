#ifndef STOP_H_
#define STOP_H_

#include <iostream>
#include <string>

using namespace std;

class Stop
{
    string name;
    int distanceToNext;
    unsigned int stopNumber;
public:
    Stop();
    Stop(string n, int distance, unsigned int stopNumber);
    unsigned int getStopNumber();
    string getName();
    void setName(string n);
    int getDistanceToNext();
    void setDistanceToNext(int distance);
};

#endif
