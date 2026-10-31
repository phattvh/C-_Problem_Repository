//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct node{
    char s;
    node *next;
};

node *createnode(char x){
    node *newnode = new node;
    newnode->s = x;
    newnode->next = NULL;
    return newnode;
}

void themnode(node **head, char x){
    node *newnode = createnode(x);

    if (*head == NULL){
        *head = newnode;
        return;
    }

    node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

void xoa(node *head, ll k){
    if (k < 1 || head == NULL) return;
    if (k == 1) return;
    
    
    node *temp = head;
    for(int i = 1; i <= k - 2; i += 1) {
        temp = temp->next;
        if (temp == NULL || temp->next == NULL) return; 
    }

    if (temp == NULL || temp->next == NULL) return; 

    node *delnode = temp->next;
    temp->next = delnode->next;

    free(delnode);
}

void sosanh(node *head){
    node *prev = NULL;
    node *curr = head;
    ll index = 1;

    while (curr != NULL){
        if (prev != NULL && curr->s < prev->s){
            node *nextnode = curr->next;
            xoa(head, index);
            curr = nextnode;
        }
        else {
            prev = curr;       
            curr = curr->next;
            index += 1;
        }
        
    }

    return;
}

void duyetlist(node *head){
    while(head != NULL){
        cout << head->s << " ";
        head = head->next;
    }
    return;
}

int main(){
    fastio;

    char c;

    node *head = NULL;
    
    while(cin >> c) themnode(&head, c);
    
    sosanh(head);
    
    duyetlist(head);


    return 0;
}
