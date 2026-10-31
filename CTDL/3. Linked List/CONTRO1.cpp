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

ll maxx(node *&head){
    node *p = head;
    ll maxn = LLONG_MIN;
    while(p != NULL){
        if (maxn < p->c) maxn = p->c;
        p = p->next;
    }
    return maxn;
}

ll minn(node *&head){
    node *p = head;
    ll minx = LLONG_MAX;
    while(p != NULL){
        if (minx > p->c) minx = p->c;
        p = p->next;
    }
    return minx;
}

void duyet(node *&head){
    node *p = head;
    while(p != NULL){
        cout << p->c;
        p = p->next;
    }
    
    return;
}

int main() {
	fastio;

    ll n, c;

    cin >> n;
    node *head = NULL;
    for(int i = 0; i < n; i += 1){
        cin >> c;
        pushback(head, c);
    }

    ll maxn = maxx(head);
    cout << maxn << el;
    node *p = head;
    ll dem = 1;
    while(p != NULL){
        if (maxn == p->c) cout << dem << " ";
        dem += 1;
        p = p->next;
    }

    cout << el;
    
    ll mian = minn(head);
    cout << mian << el;
    p = head;
    dem = 1;
    while(p != NULL){
        if (mian == p->c) cout << dem << " ";
        dem += 1;
        p = p->next;
    }

    return 0;
}
