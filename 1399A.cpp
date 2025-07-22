#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t, a[100];
    cin >> t;
    
    
    while(t--){
        int n;
        cin >> n;
       
        for(int i =0; i < n ; i++){
            cin >> a[i];
        }
        sort(a, a + n);

        bool ok = true;

        for(int i = 0; i < n;i++){
          if(a[i + 1] - a[i] > 1){
            ok = false;
            break;
          }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
}
}