#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

template <class DataType> class Node;

template <class DataType>
class Node{
private:
    DataType _data;
    Node *_p;

public:
    
    Node(DataType data);
    void display();

    friend int main();
};

template <class DataType>
Node<DataType>::Node(DataType data){
    _data = data;
    _p = NULL;
}

template <class DataType>
void Node<DataType>::display(){
    cout << _data << el;
}

int main(){
    fastio;

    Node<ll> *node1 = new Node<ll>(10);
    Node<ll> *node2 = new Node<ll>(20);

    node1->_p = node2;

    node1->display();
    node1->_p->display();

    delete node1;
    delete node2;


    return 0;
}