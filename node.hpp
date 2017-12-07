#ifndef node_hpp
#define node_hpp

#include <iostream>
#include "data.cpp"
using namespace std;

class Node 
{
    data item;
    Node* left;
    Node* right;
    public: 
        Node(void);
        Node(data given_key);
        void change_left_ptr(Node *next_ptr);
        void change_right_ptr(Node *next_ptr);
        Node* return_left();
        Node* return_right();
        data return_item();
        int return_key();
        bool compare_item(data given_key);
        void process_data(); 
        
};
#endif
