#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    set<int> colors = {s1, s2, s3, s4};
    
  
    int distinct = colors.size();
    
   
    cout << 4 - distinct << "\n";
    
    return 0;
}
