#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
   
  string s;
  for(int i = 0; i < n; i++){
    cin >> s;
     int size_s = s.size();
  if(size_s > 10){
    cout << s[0] << size_s - 2 << s[size_s - 1] << "\n";
  }else{
    cout << s << "\n";
  }

}
  
}
