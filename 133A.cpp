#include <iostream>
using namespace std;

int main(){
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);

string s;
cin >> s;

for(auto c : s){
    if(c == 'H' || c == 'Q'|| c == '9'){
        cout << "YES";
        return 0;
    }
}

cout << "NO";
return 0;

}