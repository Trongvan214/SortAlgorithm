#ifndef __BINARY_SEARCH__
#define __BINARY_SEARCH__

#include "node.hpp"

using namespace std;

class Binary_tree {
    //variables
    Node* root;
    //private memeber functions
    Node* create_leaf(int key);
    void add_leaf_priv(int key, Node* ptr);
    void print_in_order_priv(Node* ptr);
    //public member functions
    public:
        Binary_tree();
        void add_leaf(int key);
        void print_in_order();
        
};
#endif

