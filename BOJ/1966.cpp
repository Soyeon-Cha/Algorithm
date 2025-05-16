#include <bits/stdc++.h>
using namespace std;

int t, n, m, a;

int main(){
    cin >> t;
    
    while(t--){
        cin >> n >> m;
        // 맨 왼쪽이 0번째
        queue<pair<int, int>> q;
        for(int i=0; i<n; i++){
            cin >> a;
            q.push({i, a});
        }
        
        int cnt = 0;
        
        while(!q.empty()){
            int idx = q.front().first;
            int imp = q.front().second;
            q.pop();
            
            bool higher = false;
            for(int i=0; i<q.size(); i++){
                pair<int, int> temp = q.front();
                q.pop();
                q.push(temp);
                
                if(temp.second > imp){
                    higher = true;
                }
            }
            
            if(higher){
                q.push({idx, imp});
            }
            else{
                cnt++;
                if(idx == m){
                    cout << cnt << "\n";
                    break;
                }
            }
        }
    }
}
