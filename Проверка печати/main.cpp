#include <iostream>
#include <string>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    int pos = 0;
    string input = "";

    for (int i = 0; i < b.size(); i++) {
        if (b[i] >= 'a' && b[i] <= 'z') {
            input.insert(pos, 1, b[i]);
            pos++;
        } else {
            if (i + 1 < b.size()) {
                if (b[i + 1] == 'l') {
                    pos = max(0, pos - 1);
                    i += 5;
                } else if (b[i + 1] == 'r') {
                    pos = min(int(input.size()), pos + 1);
                    i += 6;
                } else if (b[i + 1] == 'b') {
                    i += 7;
                    if (pos > 0 && input.size() > 0) {
                        input.erase(pos - 1, 1);
                        pos--;
                    }
                } else if (b[i + 1] == 'd') {
                    i += 7;
                    if (pos < input.size() && input.size() > 0) {
                        input.erase(pos, 1);
                    }
                }
            }
        }
    }

    if (input == a) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

int main() {
    solve();
    return 0;
}
