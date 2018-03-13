#ifndef STOP_H_
#define STOP_H_

#include <string>

using namespace std;

class Stop
{
    string name;
    int distanceToNext;
public:
    Stop(string n, int distance);
    string getName();
    void setName(string n);
    int getDistanceToNext();
    void setDistanceToNext(int distance);
};

#endif
