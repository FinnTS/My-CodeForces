#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string board[n];

    for (int i = 0; i < n; i++) {
        cin >> board[i]; // đọc từng dòng
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '.') {
                if ((i + j) % 2 == 0)
                    board[i][j] = 'B';
                else
                    board[i][j] = 'W';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << board[i] << '\n';
    }

    return 0;
}
