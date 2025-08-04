#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector <int> result;
    set <int> seen;

    for(int i = n - 1; i >= 0; i --){
        if(seen.find(a[i]) == seen.end()){
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

   reverse(result.begin(), result.end());

   cout << result.size() <<"\n";
   for(auto c : result) cout << c << " ";
}