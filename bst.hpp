/* 
*Name: 	Trong Van
*ID:    X454V285
* 
*Name: 	Mohammad Alhaj
*ID: 	K362J964
*
Project: #2
* 
* Psuedocode:
* 
* Class Name: BST
* 
* 
* Data:       int: count - holds the counter
*             Node pointer: root - holds the root node
* 
* Mutator Functions:
* 
*             Set left pointer - changes the pointer value.  
*             	Input Parms: Node pointer: temporary pointer
*             	Output Parms: None
* 
* 			  Set left pointer - changes the pointer value.  
*             	Input Parms: Node pointer: temporary pointer
*             	Output Parms: None
*                
* Accessor Functions:
* 
*             Return count - returns the counter value
*                
* Functions:
*             BST - sets variables to default values
* 
* 			  create leaf - creates an new node
*             	Input Parms: given key
*             	Output Parms: pointer to the node
* 
* 			  add leaf private - puts the new node in the right plac
*             	Input Parms: given key, node pointer
*             	Output Parms: non
* 
* 			  add leaf - calls add leaf private and passes key
* 
*   		  Print in order - prints the data in order
* 
*/


#ifndef __BINARY_SEARCH_TREE__
#define __BINARY_SEARCH_TREE__

#include <fstream>

#include "node.hpp"
#include "data.hpp"

using namespace std;

class BST {
    //variables
    int count;
    Node* root;
    //private memeber functions
    Node* create_leaf(data item);
    void add_leaf_priv(data item, Node* ptr);
    void print_in_order_priv(Node* ptr, ostream& stream);
    //public member functions
    public:
        BST();
        BST(data[], int given_size);
        void add_leaf(data item);
        void print_in_order(ostream& stream);
        int return_count();
        
};
#endif
