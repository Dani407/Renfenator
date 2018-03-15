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
    std::cout << character + name + " starting from stop: " + line->getStops()[currentStop]->getName() + '\n';
    for (; currentStop < line->findIndex(stopName); currentStop++) {
        for (size_t j = 0; j < line->getStops()[currentStop]->getDistanceToNext()/speed; j++) {
            sleep(1);
            std::cout << character + "." + '\n';
        }
        stay(character);
        if (currentStop == (line->findIndex(stopName)-1)) {
            std::cout << character + name + " end of journey" + '\n';
        } else {
        std::cout << character + name + " is going to next stop: " + line->getStops()[currentStop+2]->getName() + '\n';
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
    unsigned short timeToStay = 5;
    std::cout << character + name + " arrived to: " + line->getStops()[currentStop+1]->getName() + '\n';
    std::cout << character + name + " waiting..." + '\n';
    lock_guard<mutex> guard(line->getStops()[currentStop]->m);
    std::cout << character + name + " stays in "  + line->getStops()[currentStop+1]->getName() + " " + to_string(timeToStay) + " seconds" + '\n';
    sleep(timeToStay);
    std::cout << '\n';
}
