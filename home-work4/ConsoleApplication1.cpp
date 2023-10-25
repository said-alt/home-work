#include <iostream>
#include <string>

using namespace std;

void add(string& str, int i) {
    
    if (i == str.length() - 1) {
        return;
    }
    str.insert(i + 1, "*");
    add(str, i + 2);
}

int main() {
    
    string in;
    cin >> in;

    if (!in.empty()) {
        add(in, 0); 
    }
    cout << in << endl;

    return 0;
}
