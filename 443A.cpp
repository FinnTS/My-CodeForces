  #include <iostream>
  #include <unordered_set>
  using namespace std;

  int main(){
    string s;
    getline(cin, s);

    unordered_set < char> l;
    for(auto c : s){
      if(isalpha(c)){
        l.insert(c);
      }
    }

    cout << l.size();
    
  }