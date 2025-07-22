#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
   
    ll odd_count = (n + 1) / 2;
    if(k <= odd_count){
        cout << 2*k - 1;
    }
    else{
        cout << 2*(k - odd_count);
    }


}