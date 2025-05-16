#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main(){
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> s;
        int x = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='O'){
                x++;
                ans += x;
            }
            else if(s[i]=='X'){
                x = 0;
            }
        }
        cout << ans << "\n";
    }
}
