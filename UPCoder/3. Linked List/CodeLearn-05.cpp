//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);

template<class DataType> class linkedlist;

template<class DataType>
class node{
private:
    DataType _data;
    node *_next;

public:
    node(DataType data);
    void display();

    friend class linkedlist<DataType>;
};

template<class DataType>
node<DataType>::node(DataType data){
    _data = data;
    _next = nullptr;
} 

template<class DataType>
void node<DataType>::display(){
    cout << _data << " ";
}

template<class DataType>
class linkedlist{
private:
    node<DataType> *_head;
    node<DataType> *_tail;
    ll _size = 0;

public:
    linkedlist();
    ~linkedlist();
    
    void add(DataType gt);
    void truyvan(DataType n1, DataType n2);
    void coutlist();
};

template<class DataType>
linkedlist<DataType>::linkedlist(){
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

template<class DataType>
linkedlist<DataType>::~linkedlist(){
    node<DataType> *curr = _head;

    while (curr != nullptr){
        node<DataType> *next = curr->_next;
        delete curr;
        curr = next;
    }
}

template<class DataType>
void linkedlist<DataType>::add(DataType gt){
    node<DataType> *newnode = new node<DataType>(gt);

    if (nullptr == _tail)_head = _tail = newnode;
    else{
        _tail->_next = newnode;
        _tail = _tail->_next;
    }
    
    _size += 1;
}

template<class DataType>
void linkedlist<DataType>::truyvan(DataType n1, DataType n2){
    node<DataType> *curr = _head;

    while(curr != nullptr){
        if (curr->_data == n1) curr->_data = n2;
        curr = curr->_next; 
    }
}

template<class DataType>
void linkedlist<DataType>::coutlist(){
    node<DataType> *curr = _head;

    while(curr != nullptr){
        cout << curr->_data << " ";
        curr = curr->_next;
    }
}

int main() {
    fastio;

    ll n, x;
    cin >> n;

    linkedlist<ll> k;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        k.add(x);
    }

    ll k1, k2;
    cin >> k1 >> k2;

    k.truyvan(k1, k2);

    k.coutlist(); 

    return 0;
}

// 6
// 1 1 2 2 3 3
// 2 10

// 11 10 10 3 3
