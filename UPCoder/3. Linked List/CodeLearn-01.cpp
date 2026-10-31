//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node{
    ll n;
    node *next;
};

node *createnode(ll x){
    node *t = new node;
    t->next = NULL;
    t->n = x;
    return t;
}

void duyetlist(node *l){
    node *p = l;
    while (p != NULL){
        cout << p->n << " ";
        p = p->next;
    }
}

node *additem(node *p, ll x){
    node *t = createnode(x);
    p->next = t;
    return t;
}

int main(){
    fastio;

    ll n, x;

    cin >> n;

    cin >> x;

    node *l = createnode(x);
    node *p = l;

    for(ll i = 1; i < n; i += 1) {
        cin >> x;
        p = additem(p, x);
    }

    duyetlist(l);

    return 0;
}
