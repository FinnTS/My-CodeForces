#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int s, n;
    cin >> s >> n;


    vector <pair<int,int>> v(n);

    for(int i =0 ; i < n; i++){
      cin >> v[i].first >> v[i].second;
    }
    bool win = true;
    sort(v.begin(), v.end());
    for(int i = 0; i < n ;i++){
        if(s >  v[i].first){
            s += v[i].second;
                }
        else{
            win = false;
            break;
        }
    }

    if(win) cout << "YES\n";
    else cout << "NO\n";



}