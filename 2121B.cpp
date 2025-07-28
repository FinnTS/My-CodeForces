#include <iostream>
#include <vector>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;

            vector <string> s(n);
            for(int i = 0; i < n; i++){
                cin >> s[i];
            }

            bool yes = true;

            for(int i = 0; i < n; i++){
                if(s[i] + s[i + 1] + s[i + 2] == s){
                    yes = true;
                    break;
                }
            }
            
            if(yes){
                cout <<"YES\n";
            }
            else{
                cout <<"NO\n";
            }

        }
}


