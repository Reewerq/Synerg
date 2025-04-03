#ifndef BINARY_TREE_H
#define BINARY_TREE_H

class BinaryTree {
private:
    struct Node {
        int value;
        Node* left;
        Node* right;
        Node(int val) : value(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

public:
    BinaryTree();
    void push(int value);  // Добавление элемента
    bool search(int value) const;  // Поиск элемента
    int pop();  // Удаление минимального элемента
};

#endif // BINARY_TREE_H

