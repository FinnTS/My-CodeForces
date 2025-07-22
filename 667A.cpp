#include <iostream>
using namespace std;

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin >> t;


while(t--){
 ll a, b;
cin >> a >> b;
  int diff = abs(a - b);
 int steps = (diff + 9) / 10;
cout << steps << '\n';

}
}