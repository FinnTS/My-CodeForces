    #include <iostream>
    #include <vector>
    #include <string>
    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int n; cin >> n;

        vector <char> s(n);

        for(int i = 0 ; i < n; i++ ){
            cin >> s[i];
        }
        
    int i = 0;
    while( i < (int)s.size() - 1){
        if(s[i] == '1' && s[i + 1] == '0' || s[i] == '0' && s[i + 1] == '1'){
            s.erase(s.begin() + i, s.begin() + i + 2);
            if(i > 0) i--;
        }
        else{
            i++;
        }
    }


        cout << s.size();
    }