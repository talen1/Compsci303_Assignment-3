#ifndef QUEUE_H
#define QUEUE_H

#include <list>

class Queue {
public:
    void enqueue(int value);
    int dequeue();
    int front() const;
    bool isEmpty() const;
    size_t size() const;

private:
    std::list<int> data;
};

#endif //QUEUE_H
