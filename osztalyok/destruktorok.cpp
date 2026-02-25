#include <iostream>

struct List {
    List(int _data, List *_next=0) : data(_data), next(_next) {
        std::cout << "Letrejon\n";
    }
    ~List() {
        delete next;
        std::cout << "Torlodott\n";
    }

    int data;
    List *next;
};

int main() {
    List head(8);
}
