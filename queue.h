#ifndef QUEUE_H
#define QUEUE_H

#include <queue>

class Queue {
private:
    std::queue<int> q;

public:
    void push(int value);  // Добавление элемента
    int pop();             // Извлечение элемента
    bool isEmpty() const;  // Проверка на пустоту
};

#endif // QUEUE_H

