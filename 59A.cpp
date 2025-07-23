#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    

    int counthoa = 0, coutthuong = 0;
    for(auto c : s){
        if(isupper(c)){
            counthoa++;
        }
        else{
            coutthuong++;
        }

    }

  for(auto c : s){
    if(counthoa > coutthuong){
        cout << (char)toupper(c);
    }
    else{
        cout << (char)tolower(c);
    }
  }
}