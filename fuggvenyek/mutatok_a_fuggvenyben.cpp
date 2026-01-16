#include <iostream>

void swapP(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int c = 5, d = 8;
    swapP(&c, &d);
    std::cout << c << " " << d << std::endl;

    return 0;
}
