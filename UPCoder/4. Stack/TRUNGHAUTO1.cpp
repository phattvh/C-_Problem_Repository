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
    char data[MAX];
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

void push(Stack &st, char x){
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

char top(Stack st){
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

    for(int i = 0; i < s.length(); i += 1){
        if ((s[i] >= 'A' && s[i] <= 'Z') || 
            (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= '0' && s[i] <= '9')) cout << s[i] << " ";
        
        else if (s[i] == '(') push(st, s[i]);
        
        else if (s[i] == ')') {
            while (!checkempty(st) && top(st) != '(') {
                cout << top(st) << " ";
                pop(st);
            }
            if (!checkempty(st) && top(st) == '(') pop(st);
        }

        else{
            while (!checkempty(st) && uutien(top(st)) >= uutien(s[i])){
                cout << top(st) << " ";
                pop(st);
            }
            push(st, s[i]);
        }
        
    }

    while(!checkempty(st)){
        cout << top(st) << " ";
        pop(st);
    }

    return 0;
}
