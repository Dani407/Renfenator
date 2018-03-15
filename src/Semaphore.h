#include <mutex>
#include <condition_variable>
using namespace std;

class Semaphore {
    mutex mu;
    condition_variable condition;
    unsigned int count;
public:
    Semaphore();
    void notify();
    void wait();
};
