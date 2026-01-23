#include <iostream>

struct List {
    int data;
    List *next;

    static int count;
};

int List::count = 0;

List *add(List *head, int data) {
    if (head == 0) {
        List *ret = new List;
        List::count++;
        ret->data = data;
        ret->next = 0;
        return ret;
    }
    head->next = add(head->next, data);
    return head;
}

void free(List *head) {
    if (head == 0) {
        return;
    }
    free(head->next);
    List::count--;
    delete head;
}

int main() {
    List *head = 0;
    head = add(head, 5);
    head = add(head, 3);
    head = add(head, 11);

    free(head);
    std::cout << List::count;

    return 0;
}
