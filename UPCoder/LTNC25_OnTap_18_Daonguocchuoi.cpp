//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    string n;
    stack<char> st;

    cin >> n;
    for(int i = 0; i < n.length(); i += 1) st.push(n[i]);

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }


    return 0;
}
/*
in
hcmue

out
eumch
*/
