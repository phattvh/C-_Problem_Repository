//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

template <class DataType> class linkedlist;

//node
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
node<DataType>::node (DataType data){
    _data = data;
    _next = nullptr;
}

template<class DataType>
void node<DataType>::display(){
    cout << _data << " ";
}

//linkedlist
template<class DataType>
class linkedlist{
private:
    node<DataType> *_head;
    node<DataType> *_tail;
    int _size = 0;

public:
    linkedlist();
    ~linkedlist();
    DataType truyvanhead();
    DataType truyvantail();
    DataType truyvanmid(ll index);
    void addback(DataType data);
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

    while(curr != nullptr){
        node<DataType> *next = curr->_next;
        delete curr;
        curr = next;
    }
}

template<class DataType>
void linkedlist<DataType>::addback(DataType data){
    node<DataType> *newnode = new node<DataType> (data);

    if (_tail == nullptr) _head = _tail = newnode;
    else{
        _tail->_next = newnode;
        _tail = newnode;
    }
    
    _size += 1;
}

template<class DataType>
DataType linkedlist<DataType>::truyvanhead(){
    return _head->_data;
}

template<class DataType>
DataType linkedlist<DataType>::truyvantail(){
    return _tail->_data;
}

template<class DataType>
DataType linkedlist<DataType>::truyvanmid(ll index){
    ll dem = 0;
    node<DataType> *curr = _head;

    while (dem < index){
        curr = curr->_next;
        dem += 1;
    }

    return curr->_data;
}

int main() {
    fastio;

    ll n, x;
    cin >> n;

    linkedlist<ll> k;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        k.addback(x);
    }

    ll z;
    cin >> z;

    if (z == 0) cout << k.truyvanhead();
    else if (z == n - 1) cout << k.truyvantail();
    else cout << k.truyvanmid(z);

    return 0;
}

// 5
// 1 2 3 4 5
// 3

// 3
