//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

template<class datatype> class binarytree;

//node
template<class datatype>
class node{
private:
    datatype _data;
    node *_left;
    node *_right;

public:
    node(datatype data);
    void display();

    friend class binarytree<datatype>;
};

template<class datatype>
node<datatype>::node(datatype data){
    _data = data;
    _left = _right = nullptr;
}

template<class datatype>
void node<datatype>::display(){
    cout << _data << " ";
}


//binary-tree
template<class datatype>
class binarytree{
private:
    node<datatype> *_root;

    void destroy(node<datatype> *curr){
        if (curr == nullptr) return;

        destroy(curr->_left);
        destroy(curr->_right);
        delete(curr);
    }

    node<datatype> *insrec(node<datatype> *curr, datatype data);

    void inorec(node<datatype> *curr){
        if (curr == nullptr) return;

        inorec(curr->_left);
        curr->display();
        inorec(curr->_right);
    }

public:
    binarytree();
    ~binarytree();
    void insert(datatype data);
    void inorder();
};

template<class datatype>
binarytree<datatype>::binarytree(){
    _root = nullptr;
}

template<class datatype>
binarytree<datatype>::~binarytree(){
    destroy(_root);
}

template<class datatype>
node<datatype> *binarytree<datatype>::insrec(node<datatype> *curr, datatype data){
    if (curr == nullptr) return new node<datatype>(data);

    if (data < curr->_data) curr->_left = insrec(curr->_left, data);
    else curr->_right = insrec(curr->_right, data);

    return curr;
}

template<class datatype>
void binarytree<datatype>::insert(datatype data){
    node<datatype> *newnode = new node<datatype>(data);

    if (_root == nullptr) _root = newnode;
    else _root = insrec(_root, data);
}

template<class datatype>
void binarytree<datatype>::inorder(){
    inorec(_root);
}

int main() {
    fastio;

    int n, x;
    cin >> n;
    
    binarytree<int> tree;
    for(int i = 0; i < n; i += 1){
        cin >> x;
        tree.insert(x);
    }

    tree.inorder();
    

    return 0;
}
