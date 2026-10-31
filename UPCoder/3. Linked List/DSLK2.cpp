//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node{
    char c;
    node *next;
};

node *createnode(char c){
    node *newnode = new node;
    newnode->c = c;
    newnode->next = NULL;
    return newnode;
}

void pushback(node *&head, char c){
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

void additem(node *&head, char c, ll index){
    node *temp = head;

    while (temp != NULL && temp->c != index) temp = temp->next;

    if (temp != NULL){
        node *newnode = new node;

    }

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

    ll n;
    char c;

    cin >> n;
    node *head = NULL;
    for(int i = 0; i < n; i += 1){
        cin >> c;
        pushback(head, c);
    }

    duyet(head);
    cout << el;

    for(char ch = 'A'; ch <= 'Z'; ch += 1){
        node *p = head;
        node *prev = NULL;

        while (p != NULL && p->c < ch){
            prev = p;
            p = p->next;
        }

        if (p != NULL && ch == p->c) continue;
        
        
        node *newnode = createnode(ch);
        newnode->next = p;
        
        if (prev == NULL) head = newnode;
        else prev->next = newnode;
        
    }
    
    duyet(head);

    return 0;
}
