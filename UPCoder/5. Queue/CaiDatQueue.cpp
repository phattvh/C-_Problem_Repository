//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);

template<class datatype> class queue;

//node
template<class datatype>
class node{
private:
    datatype _data;
    node *_next;
    
public:
    node(datatype data);
    void display();
    
    friend class queue<datatype>;
};

template<class datatype>
node<datatype>::node(datatype data){
    _data = data;
    _next = nullptr;
}

template<class datatype>
void node<datatype>::display(){
    cout << _data << " ";
}

//queue
template<class datatype>
class queue{
private:
    node<datatype> *_front;
    node<datatype> *_rear;
    int _size;
    
public:
    queue();
    ~queue();
    bool empty();
    void push(datatype data);
    datatype pop();
    void clear();
    int size() { return _size; }
}

template<class datatype>
queuek<datatype>::queue(){
    _front = _rear = nullptr;
    _size = 0;
}

template<class datatype>
queue<datatype>::~queue(){
    while(_top != nullptr){
        node<datatype> *next = _front->_next;
        delete _front;
        _front = next;
    }
}

template<class datatype>
bool queue<datatype>::empty(){
    return _front == nullptr;
}

template<class datatype>
void queue<datatype>::push(datatype data){
    node<datatype> *newnode = new node<datatype>(data);
    
    if (empty()) _front = _rear = newnode;
    else {
        _rear->_next = newnode;
        _rear = newnode;
    }
    
    _size += 1;
}

template<class datatype>
datatype stack<datatype>::pop(){
    if (empty()) {
        cout << "null queue";
        return datatype;
    }
    
    node<datatype> *curr = _front;
    datatype val = curr->_data;
    _front = _front->_next;
    if (_front == nullptr) _rear = nullptr;
    delete curr;
    _size -= 1;
    return val;
}

template<class datatype>
void stack<datatype>::clear(){
    while (!empty()) pop();
    
}

int main() {
    fastio;
    
    
    
    
	// your code goes here
    return 0;
}

