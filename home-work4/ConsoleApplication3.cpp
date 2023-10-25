#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    std::cin >> N;

    if (N < 0 || N > 30) {
       
        return 1;
    }

    int result = fibonacci(N);
    std::cout << result << std::endl;

    return 0;
}
