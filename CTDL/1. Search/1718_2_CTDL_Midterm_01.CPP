#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n, x;
    cin >> n;
    vector<ll> v;

    for(int i = 0; i < n; i += 1) {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 1; i < v.size(); i += 1){
        ll key = v[i];
        long long j = i - 1;
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j -= 1;
        }
        v[j + 1] = key;
    }

    if(!v.empty()) {
        cout << v[0] << " ";
        for(int i = 1; i < v.size(); i += 1) {
            if(v[i] != v[i-1]) {
                cout << v[i] << " ";
            }
        }
    }

    return 0;
}
