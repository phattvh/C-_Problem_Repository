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
};

node *createnode(ll c){
    node *newnode = new node;
    newnode->c = c;
    newnode->next = NULL;
    return newnode;
}

void pushback(node *&head, ll c){
    node *newnode = createnode(c);

    if (head == NULL){
        head = newnode;
        return;
    }

    node *p = head;
    while(p->next != NULL) p = p->next;

    p->next = newnode;
    
    return;
}

void duyet(node *&head){
    node *p = head;
    while(p != NULL){
        cout << p->c << " ";
        p = p->next;
    }
    
    return;
}

int main() {
	fastio;

    ll n, t, val;
    cin >> n >> t; 

    node *head = NULL;

    for(int i = 0; i < n; i += 1){
        cin >> val;
        pushback(head, val);
    }

    node *tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }

    tail->next = head;

    for(int i = 0; i < t; i += 1) {
        tail = tail->next;
    }

    head = tail->next;
    tail->next = NULL;

    duyet(head);

    return 0;
}
