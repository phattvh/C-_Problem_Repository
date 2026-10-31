#include <bits/stdc++.h>
#include <iterator>
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
        _size -= 1;
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
        newnode->_next = _head;
        _head->_prev = newnode;
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

int main() {
    fastio;

    int n;
    cin >> n;
    
    linkedlist<ll> l;
    
    l.addback(1);
    for(int i = 2; i <= n; i += 1){
        l.addback(i);
        l.addfront(i);
    }

    l.coutlist();


    return 0;
}

//7

//7 6 5 4 3 2 1 2 3 4 5 6 7