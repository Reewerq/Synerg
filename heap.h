#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <queue>

class Heap {
private:
    std::priority_queue<int> heap;

public:
    void push(int value);  // Добавление элемента
    int pop();             // Извлечение элемента
    bool isEmpty() const;  // Проверка на пустоту
};

#endif // HEAP_H
