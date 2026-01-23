#include <iostream>

struct List {
    int data;
    List *next;
};

int main() {
    List *head = new List;
    head->data = 8;
    head->next = new List;
    head->next->data = 7;
    head->next->next = new List;
    head->next->next->data = 2;
    head->next->next->next = NULL;

    std::cout << head->data << std::endl;
    std::cout << head->next->data << std::endl;
    std::cout << head->next->next->data << std::endl;

    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
