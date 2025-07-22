#include <iostream> 
using namespace std;
int par(int a[], int l, int r){
    int piv = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++){
        if(a[j] <= piv){
            i++;
            swap(a[i], a[j]);
        }
    }
    ++i;
    swap(a[i], a[r]);
    return i;
}

void quicksort(int a[], int l,int r){
    if(l >= r) return;
    int p = par(a,l,r);
    quicksort(a,l , p - 1);
    quicksort(a, p + 1, r);
}

int main(){
int a[100], n;
cin >> n;
for(int i = 0 ; i < n; i++){
    cin >> a[i];
}

quicksort(a,0,n);

for(int i = 0; i < n; i++){
    cout << a[i] << " ";
}
}