#ifndef LINE_H_
#define LINE_H_

#include "Stop.h"
#include <vector>

class Line
{
    string id;
    vector<Stop> stops;
public:
    Line();
    Line(string id);
    void init();
    void addStop(Stop stop);
    Stop getStop(unsigned int i);
    std::vector<Stop> getStops();
    Stop* find(string name);
};

#endif
