#include "Train.h"

Train::Train()
{
    currentStop = 0;
    speed = 0;
}

Train::Train(std::string name, Line* line, unsigned int currentStop, float speed)
{
    this->name = name;
    this->currentStop = currentStop;
    this->speed = speed;
    this->line = line;
}

float Train::getSpeed()
{
    return speed;
}

int Train::getCurrentStop()
{
    return currentStop;
}

void Train::go(float desiredSpeed, std::string stopName, string character)
{
    speed = desiredSpeed;
    std::cout << name + " starting from stop: " + line->getStops()[currentStop]->getName() + '\n';
    for (size_t i = currentStop; i < line->findIndex(stopName); i++) {
        std::cout << name + " esperando " + line->getStops()[i]->getName() + '\n';
        lock_guard<mutex> guard(line->getStops()[i]->m);
        for (size_t j = 0; j < line->getStops()[i]->getDistanceToNext()/speed; j++) {
            sleep(1);
            std::cout << character + '\n';
        }
        std::cout << name + " arrived to: " + line->getStops()[i+1]->getName() + '\n';
        stay(character);
        if (i == (line->findIndex(stopName)-1)) {
            std::cout << name + " end of journey" + '\n';
        } else {
        std::cout << name + " next stop: " + line->getStops()[i+2]->getName() + '\n';
        }
    }
}

void Train::stop()
{
    speed = 0;
}

void Train::setLine(Line* l)
{
    line = l;
}

void Train::stay(std::string character)
{
    float timeToStay = 5;
    std::cout << name + " stays here, 5 seconds" + '\n';
    for (size_t k = 0; k < timeToStay; k++) {
        sleep(1);
        std::cout << character;
    }
    std::cout << '\n';
}
