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
};

node *createnode(ll x){
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

void pushfront(node *&head, ll x){
    node *newnode = createnode(x);
    newnode->next = head;
    head = newnode;
}

void pushmiddle(node *&head, ll x, ll index){
    if (index == 1 || head == NULL){
        node *newnode = createnode(x);
        newnode->next = head;
        head = newnode;
        return;
    }
    
    node *p = head;
    ll k = 1;

    while(p != NULL && k <= index - 1){
        p = p->next;
        k += 1;
    }

    node *newnode = createnode(x);
    newnode->next = p->next;
    p->next = newnode;
}

void pushback(node *&head, ll x){
    node *newnode = createnode(x);
    node *p = head;

    while(p->next != NULL) p = p->next;

    p->next = newnode;
}

void popfront(node *&head){
    if (head == NULL) return;

    node *temp = head;
    head = head->next;
    
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

    while(p->next->next != NULL) p = p->next;

    delete p->next;

    p->next = NULL;
}

void popmiddle(node *&head, ll index){

    if (head == NULL || index <= 0) return;

    if (index == 1) {
        popfront(head);
        return;
    }

    node *p = head;
    ll k = 1;

    while(p != NULL && k < index - 1){
        p = p->next;
        k +=1;
    }

    if (p == NULL || p->next == NULL) return;

    node *temp = p->next;

    p->next = temp->next;
    
    delete temp;

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
