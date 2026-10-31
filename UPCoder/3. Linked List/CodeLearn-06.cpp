//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

template<class DataType> class linkedlist;

template<class DataType>
class node{
private:
    DataType _data;
    node *_next;

public:
    node (DataType data);
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
    int _size = 0;

public:
    linkedlist();
    ~linkedlist();
    void addback(DataType data);
    void del(DataType data);
    DataType get(int idx); // Thêm hàm ngắn gọn lấy giá trị tại chỉ số idx
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
void linkedlist<DataType>::addback(DataType data){
    node<DataType> *newnode = new node<DataType>(data);
    if (_head == _tail && _tail == nullptr) _head = _tail = newnode;
    else{
        _tail->_next = newnode;
        _tail = newnode;
    }
    _size += 1;
}

template<class DataType>
DataType linkedlist<DataType>::get(int idx){
    node<DataType> *curr = _head;
    int i = 0;
    while(curr != nullptr){
        if (i == idx) return curr->_data;
        i += 1;
        curr = curr->_next;
    }
    return DataType();
}

template<class DataType>
void linkedlist<DataType>::del(DataType data){
    while(_head != nullptr && _head->_data > data){
        node<DataType> *temp = _head->_next;
        delete _head;
        _head = temp;
        _size -= 1;
    }

    if (_head == nullptr) {
        _tail = nullptr;
        return;
    }

    node<DataType> *curr = _head;
    while(curr != nullptr && curr->_next != nullptr){
        if (curr->_next->_data > data){
            node<DataType> *temp = curr->_next;
            curr->_next = curr->_next->_next;

            if (temp == _tail) _tail = curr;

            delete temp;
            _size -= 1;
        } else curr = curr->_next;
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
        k.addback(x);
    }

    ll z;
    cin >> z;

    ll val = k.get(z);
    k.del(val);
    
    k.coutlist();

    return 0;
}
