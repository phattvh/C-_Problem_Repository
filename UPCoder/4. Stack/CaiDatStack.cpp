//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);

template<class datatype> class stack;

//node
template<class datatype>
class node{
private:
    datatype _data;
    node *_next;
    
public:
    node(datatype data);
    void display();
    
    friend class stack<datatype>;
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

//stack
template<class datatype>
class stack{
private:
    node<datatype> *_top;
    int _size;
    
public:
    stack();
    ~stack();
    bool empty();
    void push(datatype data);
    datatype pop();
    void clear();
    int size() { return _size; }
}

template<class datatype>
stack<datatype>::stack(){
    _top = nullptr;
    _size = 0;
}

template<class datatype>
stack<datatype>::~stack(){
    while(_top != nullptr){
        node<datatype> *next = _top->_next;
        delete _top;
        _top = next;
    }
}

template<class datatype>
bool stack<datatype>::empty(){
    return _top == nullptr;
}

template<class datatype>
void stack<datatype>::push(datatype data){
    node<datatype> *newnode = new node<datatype>(data);
    
    newnode->_next = _top;
    _top = newnode;
    _size += 1;
}

template<class datatype>
datatype stack<datatype>::pop(){
    if (empty()) {
        cout << "null stack";
        return datatype;
    }
    
    node<datatype> *curr = _top;
    datatype val = curr->_data;
    _top = _top->_next;
    delete curr;
    _size -= 1;
    return val;
}

template<class datatype>
void stack<datatype>::clear(){
    node<datatype> *curr;
    
    while(_top != nullptr){
        curr = _top;
        _top = curr->_next;
        delete curr;
    }
    
    _size = 0;
}

int main() {
    fastio;
    
    
    
    
	// your code goes here
    return 0;
}

