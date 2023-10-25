#include <iostream>
#include <vector>
using namespace std;


void rS(int N, vector<int>& s) {
    if (N > 0) {
        int num;
        cin >> num;
        rS(N - 1, s);
        s.push_back(num);
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> s;
    rS(N, s);

    for (int i = 0; i < N; i++) {
        cout << s[i];
        if (i != N - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
