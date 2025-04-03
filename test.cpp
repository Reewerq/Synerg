#include <gtest/gtest.h>
#include "queue.h"
#include "heap.h"
#include "binary_tree.h"

// Тесты для класса Queue
TEST(QueueTest, PushPop) {
    Queue q;
    q.push(10);
    EXPECT_EQ(q.pop(), 10);
}

TEST(QueueTest, IsEmpty) {
    Queue q;
    EXPECT_TRUE(q.isEmpty());
    q.push(5);
    EXPECT_FALSE(q.isEmpty());
}

// Тесты для класса Heap
TEST(HeapTest, PushPop) {
    Heap h;
    h.push(20);
    EXPECT_EQ(h.pop(), 20);
}

TEST(HeapTest, IsEmpty) {
    Heap h;
    EXPECT_TRUE(h.isEmpty());
    h.push(10);
    EXPECT_FALSE(h.isEmpty());
}

// Тесты для класса BinaryTree
TEST(BinaryTreeTest, PushSearch) {
    BinaryTree tree;
    tree.push(15);
    EXPECT_TRUE(tree.search(15));
    EXPECT_FALSE(tree.search(10));
}

TEST(BinaryTreeTest, Pop) {
    BinaryTree tree;
    tree.push(8);
    tree.push(3);
    tree.push(10);
    EXPECT_EQ(tree.pop(), 3);  // Ожидаем удаление минимального элемента
}
