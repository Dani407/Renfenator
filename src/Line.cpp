#include "Line.h"

Line::Line(string id) : id(id){}

void Line::addStop(Stop stop)
{
    stops.push_back(stop);
}

Stop Line::getStop(int i)
{
    return stops[i];
}

Stop* Line::find(string name)
{
    vector<Stop>::iterator i;
    for (i = stops.begin(); i < stops.end(); i++) {
        if (i->getName() == name){
            return &(*i);
        }
    }
    return NULL;
}
