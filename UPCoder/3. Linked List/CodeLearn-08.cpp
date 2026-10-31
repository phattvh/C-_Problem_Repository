//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

template<class datatype> class linkedlist;

template<class datatype> 
class node{
private:
    datatype _data;
    node *_next;
    node *_prev;

public:
    node(datatype data);
    void display();

    friend class linkedlist<datatype>;
};

template<class datatype>
node<datatype>::node(datatype data){
    _data = data;
    _next = nullptr;
    _prev = nullptr;
}

template<class datatype>
void node<datatype>::display(){
    cout << _data << " ";
}


template<class datatype>
class linkedlist{
private:
    node<datatype> *_head;
    node<datatype> *_tail;
    int _size = 0;

public:
    linkedlist();
    ~linkedlist();
    void addback(datatype data);
    void addfront(datatype data);
    void addin(int index, datatype data);
    void coutlist();
};

template<class datatype>
linkedlist<datatype>::linkedlist(){
    _head = _tail = nullptr;
    _size = 0;
}

template<class datatype>
linkedlist<datatype>::~linkedlist(){
    node<datatype> *curr = _head;

    while(curr != nullptr){
        node<datatype> *next = curr->_next;
        delete curr;
        curr = next;
    }
}

template<class datatype>
void linkedlist<datatype>::addback(datatype data){
    node<datatype> *newnode = new node<datatype>(data);

    if (_head == nullptr) _head = _tail = newnode;
    else{
        _tail->_next = newnode;
        newnode->_prev = _tail;
        _tail = newnode;
    }

    _size += 1;
}

template<class datatype>
void linkedlist<datatype>::addfront(datatype data){
    node<datatype> *newnode = new node<datatype>(data);

    if (_head == nullptr) _head = _tail = newnode;
    else{
        _head->_prev = newnode;
        newnode->_next = _head;
        _head = newnode;
    }

    _size += 1;
}

template<class datatype>
void linkedlist<datatype>::coutlist(){
    node<datatype> *curr = _head;

    while(curr != nullptr){
        cout << curr->_data << " ";
        curr = curr->_next;
    }
}

template<class datatype>
void linkedlist<datatype>::addin(int index, datatype data){
    if (index == _size) addback(data);
    else if (index == 0) addfront(data);
    else{
        node<datatype> *curr = _head;
        
        for (int i = 0; i < index - 1; i++) curr = curr->_next;

        node<datatype> *newnode = new node<datatype>(data);
        
        newnode->_next = curr->_next;
        newnode->_prev = curr;

        curr->_next = newnode;

        _size += 1;
    }
}


int main() {
    fastio;

    int n;
    ll x;
    cin >> n;

    linkedlist<ll> li;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        li.addback(x);
    }

    int k;
    cin >> k >> x;

    li.addin(k, x);

    li.coutlist();



    return 0;
}

