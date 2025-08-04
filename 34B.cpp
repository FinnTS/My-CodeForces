#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0;
    sort(arr.begin(), arr.end());
    for(int i =  0; i < m; i++){
        if(arr[i] > 0) break;
        sum += abs(arr[i]);
    }

    cout << sum;
}