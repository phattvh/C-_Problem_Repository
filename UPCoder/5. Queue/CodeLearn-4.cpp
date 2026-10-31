//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


int main() {
    fastio;

    queue<ll> q;
    ll n, x, k;
    cin >> n;

    for(int i = 0; i < n; i += 1) {
        cin >> x;
        q.push(x);
    }

    cin >> k;

    for(int i = 0; i < k; i += 1){
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    




    return 0;
}
