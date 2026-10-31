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

    ifstream cin("CONTRO.inp");
    ofstream cout("CONTRO.out");

    ll n, val;
    cin >> n;

    node *head = NULL;
    vector<ll> arr;

    for(int i = 0; i < n; i += 1){
        cin >> val;
        pushback(head, val);
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end());

    ll minds = LLONG_MAX;
    for(int i = 0; i < n - 1; i += 1){
        ll dist = arr[i+1] - arr[i];
        if (dist < minds) minds = dist;
    }

    ll dem = 0;
    for (int i = 0; i < n - 1; i += 1) if (arr[i+1] - arr[i] == minds) dem += 1;

    cout << dem << " " << minds << el;

    bool first = true;
    for (int i = 0; i < n - 1; i += 1) {
        if (arr[i+1] - arr[i] == minds) {
            if (!first) cout << " ";
            cout << "(" << arr[i] << ", " << arr[i+1] << ")";
            first = false;
        }
    }
    
    cout << el; 

    return 0;
}
