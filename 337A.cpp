#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

int n, m;
cin >> n >> m;

vector < int > f(m);

for(int i = 0; i < m; i++){
    cin >> f[i];
}

sort(f.begin(), f.end());

int Min = 1e9;
for(int i = 0; i <= m - n; i++){
    int hieuAB = f[i + n - 1] - f[i];
    if(hieuAB < Min){
        Min = hieuAB;
    }
}


cout << Min;

}