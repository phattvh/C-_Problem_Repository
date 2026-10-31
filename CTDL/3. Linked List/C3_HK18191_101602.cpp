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

    ll n, k;
    cin >> n >> k; 

    node *head = createnode(0);
    node *tail = head;

    for(int i = 1; i < n; i += 1){
        node *newnode = createnode(i);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    tail->next = head;
    head->prev = tail;

    node *curr = head;
    ll steps = abs(k) - 1;

    for (ll i = 0; i < n; i++) {
        if (k > 0) {
            for (ll j = 0; j < steps; j++) {
                curr = curr->next;
            }
        } else {
            for (ll j = 0; j < steps; j++) {
                curr = curr->prev;
            }
        }

        cout << curr->c << " ";

        node *next_start = (k > 0) ? curr->next : curr->prev;

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;

        delete curr;
        curr = next_start;
    }

    return 0;
}
