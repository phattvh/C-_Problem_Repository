//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node{
    ll data;
    node *next;
    node *prev;
};

node *createnode(ll x){
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void pushfront(node *&head, ll x){
    node *newnode = createnode(x);
    newnode->next = head;
    if (head != NULL) head->prev = newnode;
    head = newnode;
}

void pushmiddle(node *&head, ll x, ll index){
    if (index == 1 || head == NULL){
        pushfront(head, x);
        return;
    }
    
    node *p = head;
    ll k = 1;

    while(p != NULL && k < index - 1){
        p = p->next;
        k += 1;
    }

    if (p == NULL) return;

    node *newnode = createnode(x);
    node *temp = p->next;

    newnode->next = temp;
    newnode->prev = p;
    p->next = newnode;

    if (temp != NULL) temp->prev = newnode;
}

void pushback(node *&head, ll x){
    node *newnode = createnode(x);
    
    if (head == NULL) {
        head = newnode;
        return;
    }

    node *p = head;
    while(p->next != NULL) p = p->next;

    p->next = newnode;
    newnode->prev = p;
}

void popfront(node *&head){
    if (head == NULL) return;

    node *temp = head;
    head = head->next;
    
    if (head != NULL) {
        head->prev = NULL;
    }
    
    delete temp;
}

void popback(node *&head){
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node *p = head;
    while(p->next != NULL) p = p->next;

    node *temp = p->prev;
    temp->next = NULL;
    
    delete p;
}

void popmiddle(node *&head, ll index){
    if (head == NULL || index <= 0) return;

    if (index == 1) {
        popfront(head);
        return;
    }

    node *p = head;
    ll k = 1;

    while(p != NULL && k < index){
        p = p->next;
        k += 1;
    }

    if (p == NULL) return;

    if (p->next == NULL) {
        popback(head);
        return;
    }

    p->prev->next = p->next;
    p->next->prev = p->prev;
    
    delete p;
}

int main(){
    fastio;

    node *head = NULL;

    pushfront(head, 10);
    pushfront(head, 20);
    pushfront(head, 30);
    
    pushback(head, 40);
    pushback(head, 50);
    
    pushmiddle(head, 99, 3);

    cout << "Push: ";
    node *p = head;
    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << el;

    popfront(head);
    popback(head);
    popmiddle(head, 2);

    cout << "Pop:  ";
    p = head;
    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << el;

    while(head != NULL) {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
