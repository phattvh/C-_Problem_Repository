//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);


int main() {
    fastio;

    stack<char> st;
    string s;
    cin >> s;

    ll dem = 1;

    for(int i = 0; i < s.length(); i += 1){
        if (st.empty()) st.push(s[i]);

        else if (s[i] == st.top()) st.push(s[i]);

        else{
            cout << st.top() << st.size();
            while(!st.empty()) st.pop();
            st.push(s[i]);
            dem = 1;
        }
    }

    cout << st.top() << st.size();


    return 0;
}
