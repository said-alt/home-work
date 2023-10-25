#include <iostream>
#include <vector>
using namespace std;

void gC(int N, int K, vector<int>& cC) {
    if (N == 0) {
      
        for (int i = 0; i < cC.size(); i++) {
            cout << cC[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= K; i++) {
        cC.push_back(i);
        gC(N - 1, K, cC);
        cC.pop_back();
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> cC;
    gC(N, K, cC);

    return 0;
}
