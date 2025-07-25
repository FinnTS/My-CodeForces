#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int player = v[j - 1];
        int count_stronger = 0;

        for(int i = 0; i < n; i++){
            if(v[i] > player){
                count_stronger++;
            }
           else if(v[i] == player){
                count_stronger--;
            }
        }

        if(count_stronger <= n - k){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
