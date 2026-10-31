//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

template<class DataType> class linkedlist;

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
node<DataType>::node(DataType data){
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
    int _size;

public:
    linkedlist();
    ~linkedlist();
    void addback(DataType data);
    void popfront();
    void popback();
    void eraseat(ll index);
    void coutlist();
    int getsize() { return _size; }
    
};

template<class DataType>
linkedlist<DataType>::linkedlist(){
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
   
};

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
void linkedlist<DataType>::addback(DataType data) {
    node<DataType> *newNode = new node<DataType>(data);
    if (_tail == nullptr) {
        _head = _tail = newNode;
    } else {
        _tail->_next = newNode;
        _tail = newNode;
    }
    _size++;
}


template<class DataType>
void linkedlist<DataType>::popfront(){
    node<DataType> *next = _head->_next;
    delete _head;
    _head = next;
    
    if (_head == nullptr) _tail = nullptr;
    
    _size -= 1;
}

template<class DataType>
void linkedlist<DataType>::popback(){
    if (_head == _tail) {
        delete _head;
        _head = _tail = nullptr;
    } else {
        node<DataType> *curr = _head;
        while(curr->_next != _tail) {
            curr = curr->_next;
        }
        delete _tail;
        _tail = curr;
        _tail->_next = nullptr;
    }
    
    _size--;

}

template<class DataType>
void linkedlist<DataType>::coutlist() {
    node<DataType> *temp = _head;

    while (temp != nullptr) {
        temp->display();
        temp = temp->_next;
    }

}

template<class DataType>
void linkedlist<DataType>::eraseat(ll index) {

    node<DataType> *curr = _head;
    for (int i = 0; i < index - 1; i++) {
        curr = curr->_next;
    }

    node<DataType> *nodedel = curr->_next;
    curr->_next = nodedel->_next;

    delete nodedel;
    _size--;
}


int main() {
    fastio;

    int n;
    cin >> n;

    linkedlist<int> lil;
    for(int i = 0; i < n; i += 1){
        int val;
        cin >> val;
        lil.addback(val);
    }
    
    ll index;
    cin >> index;
    
    if (index == 0) lil.popfront();
    else if (index == n - 1) lil.popback();
    else lil.eraseat(index);
    
    lil.coutlist();



    return 0;
}

//4
//1 2 3 4
//1

//1 3 4
