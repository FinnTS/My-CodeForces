#include <iostream>
#include <cctype> // cần để dùng tolower, toupper
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (char c : s) {
        char lower = tolower(c); // chuyển về chữ thường để xử lý đơn giản
        if (lower != 'a' && lower != 'o' && lower != 'y' && 
            lower != 'e' && lower != 'u' && lower != 'i') {
            result += '.';
            result += lower;
        }
    }

    cout << result;
    return 0;
}
