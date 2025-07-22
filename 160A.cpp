#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    vector <int> v;
    int toltalsum = 0;
    int dem  = 0;
    for(int i = 0; i < n; i ++){
        int a;
        cin >> a;
        v.push_back(a);
        toltalsum += v[i];
    }
    sort(v.begin(), v.end(), greater<int>());

    int dong_xu_lay = 0;
    for(int i = 0; i < n; i++){
        dong_xu_lay += v[i];
        dem++;
        if(dong_xu_lay > toltalsum - dong_xu_lay){
            break;
        }
    }  

    cout << dem;
}