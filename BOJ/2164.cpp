#include <bits/stdc++.h>
using namespace std;

int n;

int main(void){
    cin >> n;

    queue<int> q;
    for (int i=0; i<n; i++){
        q.push(i+1);
    }

    int answer;
    answer = q.front();
    q.pop();

    while (!q.empty()){
        answer = q.front();
        int temp = q.front();
        q.pop();
        q.push(temp);
        q.pop();
    }
    cout << answer << '\n';
}
