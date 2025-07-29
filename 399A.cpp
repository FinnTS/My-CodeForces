#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> v;  // vector rỗng

    for(int i = 0; i < (int)s.size(); i++){
        if(isdigit(s[i])){
            v.push_back(s[i] - '0');
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < (int)v.size(); i++){
        if(i > 0) cout << "+";
        cout << v[i];
    }

  
}
