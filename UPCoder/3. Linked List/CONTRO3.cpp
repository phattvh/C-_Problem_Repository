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

void addin(node *&head, ll c, ll index){

    if (index == 1 || head == NULL) {
        node *newnode = createnode(c);
        newnode->next = head; 
        head = newnode;    
        return;
    }

    node *p = head; 
    ll k = 1;
    while (p->next != NULL && k < index - 1) {
        p = p->next;
        k += 1;
    }

    node *newnode = createnode(c);
    newnode->next = p->next;
    p->next = newnode;
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

    ll n, c, k, a;

    cin >> n >> a >> k;
    node *head = NULL;
    for(int i = 0; i < n; i += 1){
        cin >> c;
        pushback(head, c);
    }
    
    addin(head, a, k);

    ll dem = 0;
    node *p = head;
    while(p != nullptr){
        dem += 1;
        p = p->next;
    }

    cout << dem << el;
    duyet(head);
    

    return 0;
}
