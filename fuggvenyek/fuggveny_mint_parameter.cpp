#include <iostream>

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int reduce(int a, int b, int (*op)(int, int)) {
    return (*op)(a, b);
}

int main() {
    std::cout << reduce(2, 3, &add) << std::endl;
    std::cout << reduce(2, 3, &mul) << std::endl;

    return 0;
}
