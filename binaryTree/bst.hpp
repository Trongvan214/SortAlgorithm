#ifndef __BINARY_SEARCH_TREE__
#define __BINARY_SEARCH_TREE__

#include "node.hpp"

using namespace std;

class BTS {
    //variables
    Node* root;
    //private memeber functions
    Node* create_leaf(int key);
    void add_leaf_priv(int key, Node* ptr);
    void print_in_order_priv(Node* ptr);
    //public member functions
    public:
        BTS();
        void add_leaf(int key);
        void print_in_order();
        
};
#endif

