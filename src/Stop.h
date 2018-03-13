#ifndef STOP_H_
#define STOP_H_

#include <string>

using namespace std;

class Stop
{
    unsigned int stopNumber;
    string name;
    int distanceToNext;
public:
    Stop();
    Stop(string n, int distance);
    int getStopNumber();
    string getName();
    void setName(string n);
    int getDistanceToNext();
    void setDistanceToNext(int distance);
};

#endif
