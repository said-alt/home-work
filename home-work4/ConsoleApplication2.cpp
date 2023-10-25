#include <iostream>

int NOD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return NOD(b, a % b);
    }
}

int main() {
    int n1, n2;

    std::cin >> n1 >> n2;

    int result = NOD(n1, n2);

    std::cout << result << std::endl;

    return;
}
