#include <iostream>
using namespace std;

int fid(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fid(n - 1) + fid(n - 2);
    }
}

int main() {
    setlocale(LC_ALL, "russian");
    int N;
    cout << "Введите N: ";
    cin >> N;

    int result = fid(N);
    cout << N << "-е число Фибоначчи: " << result << endl;

    return 0;
}