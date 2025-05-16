#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, num=1;
    char game;
    string s;
    
    // Y 2명, F 3명, O 4명
    cin >> n >> game;
    unordered_set<string> names;
    while(n--){
        cin >> s;
        names.insert(s);
    }
    
    if(game=='F'){
        num = 2;
    }
    else if(game=='O'){
        num = 3;
    }
    
    cout << names.size()/num;
}
