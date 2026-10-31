//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node{
    ll c;
    node *next;
    node *prev;
};

node *createnode(ll c){
    node *newnode = new node;
    newnode->c = c;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

int main() {
    fastio;

    node *head = createnode(0);
    node *tail = head;

    for(int i = 1; i <= 9; i += 1){ 
        node *newnode = createnode(i);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    tail->next = head;
    head->prev = tail;

    node *curr = head; 
    
    string line;
    if (getline(cin, line)) {
        stringstream ss(line);
        ll x;
        while (ss >> x) { 
            ll steps = abs(x);

            if (x > 0) {
                for (ll i = 0; i < steps; i++) {
                    curr = curr->next;
                }
            } else if (x < 0) {
                for (ll i = 0; i < steps; i++) {
                    curr = curr->prev;
                }
            }

            cout << curr->c; 
        }
    }
    cout << el; 

    return 0;
}
