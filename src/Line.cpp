#include "Line.h"

Line::Line(){}

Line::Line(string id) : id(id){}

void Line::addStop(Stop stop)
{
    stops.push_back(stop);
}

Stop Line::getStop(unsigned int i)
{
    if (i >= stops.size()) {
        throw "FUERA DE RANGO";
    }
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
