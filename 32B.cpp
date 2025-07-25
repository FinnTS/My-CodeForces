#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '.') {
            cout << 0;
        } else {
            if (i + 1 < (int)s.size() && s[i + 1] == '.') {
                cout << 1;
                i++; 
            } else if (i + 1 < (int)s.size() && s[i + 1] == '-') {
                cout << 2;
                i++;
            }
        }
    }

    return 0;
}
