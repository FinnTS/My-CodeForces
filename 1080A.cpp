    #include <iostream>
    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        long long t;
        cin >> t;

        while(t--){
            long long m, n;
            cin >> m >> n;

            if( m == 1 || n == 1 ) cout << "NO\n";
            else cout << "YES\n";
        }

    }