#include <iostream>

struct Hallgato {
    double atlag;
    int kor;
    int magassag;
};

struct Hallgato2 {
    int kor;
    double atlag;
    int magassag;
};

int main() {
    std::cout << "double, int, int: "  << sizeof(Hallgato) << std::endl;
    std::cout << "int, double, int: "  << sizeof(Hallgato2) << std::endl;

    return 0;
}
