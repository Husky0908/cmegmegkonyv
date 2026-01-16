#include <iostream>

int main() {
    int i;
    int t[] = {5, 4, 3, 2, 1};

    std::cout << sizeof(i) << std::endl;
    std::cout << sizeof(t) << std::endl;

    for (i=0;i<6;i++) {
        std::cout << t[i] << std::endl;
    }
    
    for (i=0;i<100;i++) {
        ++t[i];
        std::cout << t[i] << std::endl;
    }

    return 0;
}
