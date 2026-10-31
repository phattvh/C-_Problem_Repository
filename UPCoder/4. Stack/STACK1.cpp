//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);



int main() {
	fastio;

    stack<char> st;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i += 1){
        if (s[i] != '*') st.push(s[i]);
        else {
            if (!st.empty()){
                cout << st.top() << " ";
                st.pop();
            } else continue;
        }
    }



    return 0;
}
