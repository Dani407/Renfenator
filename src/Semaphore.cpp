#include "Semaphore.h"

Semaphore::Semaphore() : count(0) {}

void Semaphore::notify() {
    unique_lock<mutex> lock(mu);
    count++;
    condition.notify_one();
}

void Semaphore::wait() {
    unique_lock<mutex> lock(mu);
    while(count == 0) {
        condition.wait(lock);
    }
    count--;
}
