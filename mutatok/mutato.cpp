#include <iostream>

int main() {
    int c=5, d=8;
    int *p = &c;

    *p=4;
    p=&d;
    *p=7;

    std::cout << "*p: "  << *p << " c:  " << c << " d:  "  << d << std::endl;

    return 0;
}
