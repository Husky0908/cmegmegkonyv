#include <iostream>

struct List {
    List(int _data, List *_next=NULL) {
        data = _data;
        next = _next;
    }
    int data;
    List *next;
};


struct Printer {
    Printer(int i) : x(i), y(x) {
        std::cout << y << " " << x << std::endl;
    }
    int y, x;
};

int main() {
    Printer a(5);
    List head(10);
    std::cout << head.data << std::endl;
}
