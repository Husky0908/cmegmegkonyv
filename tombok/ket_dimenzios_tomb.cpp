#include <iostream>

int main() {
    int i_2;
    int i_3;
    int t[] [3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i=0;i<6;++i) {
        i_2=(i>3) ? 1 : 0;
        i_3=(i>3) ? i-3 : i;
        std::cout << t[i_2][i_3];
    }

    return 0;
}
