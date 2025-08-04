#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        set <int> c;

        for(int i = 0; i < n; i++){
            c.insert(a[i]);
        }

        bool all = true;
       
        for(int i = 0; i < n; i++){
            if(c[i] != a[i]){
                all = false;
                break;
            }

        }

    }
}