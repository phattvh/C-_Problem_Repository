//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);

template<class datatype> class linkedlist;

//node
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

//linkedlist
template<class datatype>
class linkedlist{
private:
    node<datatype> *_head;
    node<datatype> *_tail;
    int _size = 0;

public:
    linkedlist();
    ~linkedlist();
    void del(int index);
    void coutlist();
    void addback(datatype data);
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
void linkedlist<datatype>::coutlist(){
    node<datatype> *curr = _head;

    while(curr != nullptr){
        cout << curr->_data << " ";
        curr = curr->_next;
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
void linkedlist<datatype>::del(int index){

    if (index == 0){
        node<datatype> *curr = _head;
        _head = curr->_next;
        delete curr;

        if (_head == nullptr) _tail = nullptr;
        _size -= 1;

    }
    else if (index == _size - 1){
        node<datatype> *curr = _tail;
        _tail = curr->_prev;

        if (_tail == nullptr) _head = nullptr;
        else _tail->_next = nullptr;

        delete curr;
        _size -= 1;
    }
    else{
        node<datatype> *curr = _head;
        int dem = 0;

        while(curr != nullptr && dem < index){
            dem += 1;
            curr = curr->_next;
        }

        curr->_prev->_next = curr->_next;
        curr->_next->_prev = curr->_prev;
        delete curr;
        _size -= 1;
    }

}



int main() {
    fastio;

    int n;
    cin >> n;

    ll x;
    linkedlist<ll> lil;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        lil.addback(x);
    }

    int k;
    cin >> k;

    lil.del(k);

    lil.coutlist();


    return 0;
}
