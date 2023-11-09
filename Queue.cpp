#include "Queue.h"

void Queue::enqueue(int value) {
    data.push_back(value);
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw std::out_of_range("Queue is empty");
    }
    int value = data.front();
    data.pop_front();
    return value;
}

int Queue::front() const {
    if (isEmpty()) {
        throw std::out_of_range("Queue is empty");
    }
    return data.front();
}

bool Queue::isEmpty() const {
    return data.empty();
}

size_t Queue::size() const {
    return data.size();
}
