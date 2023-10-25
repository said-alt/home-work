#include <iostream>
using namespace std;

char Max(string s, int index, char m) {
    if (index == s.length()) {
        return m;
    }
    char c = s[index];

    if (c > m) {
        m = c;
    }

    return Max(s, index + 1, m);
}

int main() {
    string i;
    cin >> i;

    char m = '0';
    char result = Max(i, 0, m);
    cout << result << endl;
    return 0;
}
