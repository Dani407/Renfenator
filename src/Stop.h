#ifndef STOP_H_
#define STOP_H_

using namespace std;

class Stop
{
    string name;
    int distanceToNext;
public:
    string getName();
    void setName(string n);
    int getDistanceToNext();
    void setDistanceToNext(int distance);
};

#endif
