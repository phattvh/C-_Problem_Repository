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

    ll n, val;

    cin >> n;
    node *head = NULL;

    vector<bool> app(100000, false);

    for(int i = 0; i < n; i += 1){
        cin >> val;
        pushback(head, val);
        app[val] = true;
    }

    for(node *pb = head; pb != nullptr; pb = pb->next)
        for(node *pc = pb->next; pc != nullptr; pc = pc->next){
            ll sum = pb->c + pc->c;

            for(node *pa = head; pa != nullptr; pa = pa->next) {
                if (pa->c == sum && pa != pb && pa != pc) {
                    cout << "YES" << el;
                    return 0;
                }
            }
    }
    
    cout << "NO";
    

    return 0;
}
