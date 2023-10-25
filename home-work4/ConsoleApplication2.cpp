#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    setlocale(LC_ALL, "russian");
    int num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "Наибольший общий делитель (НОД): " << result << endl;

    return 0;
}
