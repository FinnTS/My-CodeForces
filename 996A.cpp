#include <iostream>
#include <algorithm>
using namespace std;

int main(){
 ios_base:: sync_with_stdio(false);
 cin.tie(nullptr);

 int n;
 cin >> n;

 int dolars[5] = {100,20,10,5,1};
 int count = 0;

 for(int i = 0; i < 5; i++){
    count += n / dolars[i];
    n %= dolars[i];
 }

 cout << count;
 

 


}