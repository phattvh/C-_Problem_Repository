//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    string s;
    stack<char> st;

    cin >> s;

    for(int i = 0; i < s.length(); i += 1){
        if (s[i] == '(') st.push(s[i]);
        else{
            if (st.empty()){
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty()) cout << "YES"; else cout << "NO";


    return 0;
}
/*
in
((())()())

out
YES


*/
