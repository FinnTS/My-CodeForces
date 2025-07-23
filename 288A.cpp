#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int a[4] = {s1,s2,s3,s4};

    int dem =0;

    for(int i = 0; i < 4; i++){
        if(a[i] == a[i + 1]){
            dem++;
        }
    }

    cout << dem;
}