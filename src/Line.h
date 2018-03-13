#ifndef LINE_H_
#define LINE_H_

#include "Stop.h"
#include <vector>

class Line
{
    string id;
    vector<Stop> stops;
public:
    Line(string id);
    void addStop(Stop stop);
    Stop getStop(int i);
    Stop* find(string name);
};

#endif
