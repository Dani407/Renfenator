#include "Line.h"

Line::Line(){}

Line::Line(string id) : id(id){}

void Line::addStop(Stop* stop)
{
    stops.push_back(stop);
}

Stop* Line::getStop(unsigned int i)
{
    if (i >= stops.size()) {
        throw "FUERA DE RANGO";
    }
    return stops[i];
}

std::vector<Stop*> Line::getStops()
{
    return stops;
}

Stop* Line::find(string name)
{
    // vector<Stop*>::iterator i;
    for (unsigned int i = 0/*stops.begin()*/; i < stops.size(); i++) {
        if (stops[i]->getName() == name){
            return stops[i];
        }
    }
    return NULL;
}

unsigned int Line::findIndex(string name)
{
    //vector<Stop*>::iterator i;
    unsigned int count = 0;
    for (unsigned int i = 0; i < stops.size(); i++) {
        if (stops[i]->getName() == name){
            return count;
        }
        count++;
    }
    return 0;
}
