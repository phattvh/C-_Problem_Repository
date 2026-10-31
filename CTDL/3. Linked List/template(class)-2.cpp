    #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

//NODE
template <class DataType>
class Node{
private:
    DataType _data;
    Node *_next;

public:
    Node(DataType data);
    void display();
};

template<class DataType>
Node<DataType>::Node(DataType data){
    _data = data;
    _next = nullptr;

}

template <class DataType>
void Node<DataType>::display() {
    cout << _data << " ";
}


//LINKED LIST
template <class DataType>
class LinkedList {
private:
    Node<DataType> *_head;
    Node<DataType> *_tail;
    int _size;

public:
    LinkedList();
    ~LinkedList();
};

template <class DataType>
LinkedList<DataType>::LinkedList(){
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

template <class DataType>
LinkedList<DataType>::~LinkedList(){
    Node<DataType> *curr = _head;      

    while(curr != NULL){
        Node<DataType> *next = curr->_next;
        delete curr;
        curr = next;
    }
}

template <class DataType>
LinkedList<DataType>::addhead(DataType data){
    Node<DataType> *newnode = new Node<DataType> data;
    
    if (_head = nullptr){
        _head = newnode;
        _tail = newnode;
    } else {
        newnode->next = _head;
        _head = newnode;
    }

    size += 1;

}

int main(){
    fastio;

    Node<int> *p1 = new Node<int>(10);

    p1->display();

    cout << el;
    delete p1;

    return 0;
}
