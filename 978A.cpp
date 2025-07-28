#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    set<int> seen;
    vector<int> result;

    // Duyệt từ phải sang trái
    for(int i = n - 1; i >= 0; i--) {
        if(seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    // Đảo ngược lại kết quả
    reverse(result.begin(), result.end());

    // In ra số lượng phần tử còn lại
    cout << result.size() << "\n";

    // In mảng sau khi xoá trùng
    for(int x : result) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
