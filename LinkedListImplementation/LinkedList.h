#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int val);
    };

    Node* head;

public:
    LinkedList();
    ~LinkedList();

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void deleteNode(int value);
    bool search(int value);
    void print();
    void clear();
};

#endif  // LINKEDLIST_H
