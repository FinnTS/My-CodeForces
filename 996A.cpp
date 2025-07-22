#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int bill [] = {100, 20, 10, 5, 1};
    int count  = 0;
    for(int i = 0; i < 5; i++){
        count += n / bill[i];
        n %= bill[i];
    }
    cout << count;
}