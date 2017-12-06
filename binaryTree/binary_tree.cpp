/*              Binary Search Tree Pseudo Code
 * Constructor function: Binary_search
 * input: none
 * output: none
 * return: none
 * functionality: make the array and set the value
 * 
 * function name: Search 
 * input: target value to search
 * output: where the value given is at or not found
 * return: none
 * functionality: binary search the given value and print where its located*/

#include <iostream>
#include "binary_tree.hpp" 

using namespace std;

//default constructor 
Binary_tree::Binary_tree() 
{
    root = NULL;
}
//create leaf help prevent new dynamic menory everytime in recursive function
Node* Binary_tree::create_leaf(int key)
{
    return new Node(key);
}
//public add leaf so they can't get access to root 
void Binary_tree::add_leaf(int key)
{
    add_leaf_priv(key,root);
}
//take a given key and add it to the tree
void Binary_tree::add_leaf_priv(int key, Node* ptr)
{
    //if no node in the tree case
    if(root == NULL)
    {
        root = create_leaf(key);
    }
    //if key is less than ptr
    else if(key < ptr->return_key())
    {
        //if more left node
        if(ptr->return_left() != NULL)
        {
            //go to left node
            add_leaf_priv(key, ptr->return_left());
        }
        //if no more left node
        else 
        {
            ptr->change_left_ptr(create_leaf(key));
        }
    }
    //if key is greater than ptr
    else if(key > ptr->return_key())
    {
        //if more right node
        if(ptr->return_right() != NULL)
        {
            //go to the right node
            add_leaf_priv(key, ptr->return_right());
        }
        //if no right node
        else 
        {
            ptr->change_right_ptr(create_leaf(key));
        }
    }
    //the key is already in the tree
    else 
    {
        cout << "Value " << key << " is already in the tree" << endl;
    }
}
//call the print in order priv and past in root as ptr
void Binary_tree::print_in_order()
{
    print_in_order_priv(root);
}
//function that print the tree in order from left to right
void Binary_tree::print_in_order_priv(Node* ptr)
{
    if(root != NULL)
    {
        if(ptr->return_left() != NULL)
        {
            print_in_order_priv(ptr->return_left());
        }
        cout << ptr->return_key() << " ";
        if(ptr->return_right() != NULL)
        {
            print_in_order_priv(ptr->return_right());
        }
    }
    else 
    {
        cout << "The tree is empty" << endl;
    }
}

