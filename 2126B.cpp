#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    

    while(t--){
        int n, k;
        cin >> n >> k;
        int a[100001];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int dinh = 0;
        int i = 0;
        
        while(i <= n - k){
            bool daleo = true;
            for(int j = 0; j < k; j++){
                if(a[i + j] == 1){
                    daleo = false;
                    break;
                }
            }

            if(daleo){
                dinh++;
                i += k + 1;
            }
            else{
                i++;
            }
        }
         cout << dinh <<"\n";
    }
}