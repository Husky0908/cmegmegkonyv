#include <iostream>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap(std::string *a, std::string *b) {
    std::string tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int c = 5, d = 8;
    std::string e = "alma", f = "korte";
    
    swap(&c, &d);
    std::cout << c << " " << d << std::endl;

    swap(&e, &f);
    std::cout << e << " " << f << std::endl;

    return 0;
}
