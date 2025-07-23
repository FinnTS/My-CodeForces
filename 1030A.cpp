#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
int n;
cin >> n;

vector <int> v(n);

for(int i = 0 ; i < n; i++){
    cin >> v[i];
}


for(int i = 0; i < n; i++){
    if(v[i] == 1){
        cout << "HARD";
        return 0;
    }
}

cout << "EASY";
return 0;

}