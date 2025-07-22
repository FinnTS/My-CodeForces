#include <iostream> 
using namespace std;


int main(){
    int n, m, a;
    cin >> n >> m >> a;

  int doc = n / a;
  if(n % a != 0) doc++;

  int ngang = m / a;
  if(m % a != 0) ngang ++;

  cout << 1ll * doc * ngang ;
}