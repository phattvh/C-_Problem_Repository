#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n;
    cin >> n;
    stack<ll> st;

    while(n > 0){
        st.push(n % 2);
        n /= 2;
    }

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }


    return 0;
}
/*
in
13

out
1101
*/
