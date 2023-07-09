#include "LinkedList.h"
#include <iostream>

int main() {
    LinkedList list;
    list.insertAtBeginning(5);
    list.insertAtEnd(10);
    list.insertAtEnd(15);
    list.print();

    list.deleteNode(10);
    list.print();

    std::cout << "Search 15: " << (list.search(15) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 10: " << (list.search(10) ? "Found" : "Not Found") << std::endl;

    list.clear();
    list.print();

    return 0;
}
