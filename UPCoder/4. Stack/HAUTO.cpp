//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX 1000
struct Stack{
    int top;
    ll data[MAX];
};

void init(Stack &st){
    st.top = -1;
}

bool full(Stack &st){
    return st.top >= MAX - 1;
}

bool checkempty(Stack &st){
    return st.top == -1;
}

void push(Stack &st, ll x){
    if (!full(st)){
        st.top += 1;
        st.data[st.top] = x;
    }
}

void pop(Stack &st){
    if (!checkempty(st)){
        st.top -= 1;
    }
}

ll top(Stack st){
    if (!checkempty(st)) return st.data[st.top];
    return '\0';
}

int uutien(char c){
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0; 
}

int main() {
	fastio;

    Stack st;

    init(st);

    string s;
    getline(cin, s);

    stringstream ss(s);
    string tok;

    while(ss >> tok){
        if (tok == "+" || tok == "-" || tok == "*"){
            ll val2 = top(st); pop(st);
            ll val1 = top(st); pop(st);

            if (tok == "+") push(st, val1 + val2);
            else if (tok == "-") push(st, val1 - val2);
            else if (tok == "*") push(st, val1 * val2);
        } else {
            ll num = stoll(tok);
            push(st, num);
        }
    }

    cout << top(st);

    return 0;
}
