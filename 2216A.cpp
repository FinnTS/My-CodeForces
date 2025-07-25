#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
     string x;
     cin >> x;

     set <char> s;
     
     for(auto c : x){
        s.insert(c);
     }
     
     for(int y = 0 ;y <= 9; y++){
        char c = y + '0';
        if(s.count(c)){
            cout << y << "\n";
            break;
        }
     }
}

}