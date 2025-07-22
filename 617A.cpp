#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int dem = 0, result = 0;
    for(int i = 5; i >= 1; --i){
       while(x >= i){
        x -= i;
        dem++;
       }
    }

    cout << dem;
}