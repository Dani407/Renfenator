#include "Line.h"

Line::Line(){}

Line::Line(string id) : id(id){}

void Line::init()
{
    Stop stop("Aranjuez", 10, 0);
    addStop(stop);
    Stop stop("Ciempozuelos", 20, 1);
    addStop(stop);
    Stop stop("Valdemoro", 30, 2);
    addStop(stop);
    Stop stop("Pinto", 10, 3);
    addStop(stop);
    Stop stop("GetafeInd", 10, 4);
    addStop(stop);
    Stop stop("ElCasar", 10, 5);
    addStop(stop);
    Stop stop("SanCristobal", 10, 6);
    addStop(stop);
    Stop stop("Villaverde", 10, 7);
    addStop(stop);
}

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
