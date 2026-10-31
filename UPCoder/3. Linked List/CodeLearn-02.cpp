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
    void addfront(DataType x);
    void addback(DataType x);
    void addin(DataType x, int pos);
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

    while(curr != nullptr){
        node<DataType> *next = curr->_next;
        delete curr;
        curr = next;
    }
}

template<class DataType>
void linkedlist<DataType>::addfront(DataType x){
    node<DataType> *newnode = new node<DataType> (x);

    if (_head == nullptr){
        _head = newnode;
        _tail = newnode;
    } else {
        newnode->_next = _head;
        _head = newnode;
    }

    _size += 1;
}

template<class DataType>
void linkedlist<DataType>::addback(DataType x){
    node<DataType> *newnode = new node<DataType> (x);

    if (_head == nullptr){
        _head = newnode;
        _tail = newnode;
    } else {
        _tail->_next = newnode;
        _tail = newnode;
    }
    
    _size += 1;
}

template<class DataType>
void linkedlist<DataType>::addin(DataType x, int pos){
    node<DataType> *newnode = new node<DataType>(x);
    node<DataType> *temp = _head;

    for(int i = 0; i < pos - 1; i += 1) temp = temp->_next;

    newnode->_next = temp->_next;
    temp->_next = newnode;
    _size += 1;
}

template<class DataType>
void linkedlist<DataType>::coutlist() {
    node<DataType> *temp = _head;

    while (temp != nullptr) {
        temp->display();
        temp = temp->_next;
    }

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

    int pos, x;

    cin >> pos >> x;

    if (pos == 0) lil.addfront(x);
    else if (pos == n) lil.addback(x);
    else lil.addin(x, pos);

    lil.coutlist();


    return 0;
}

//4
//1 2 3 4
//1 10

//1 10 2 3 4
