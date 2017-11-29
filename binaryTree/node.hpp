#ifndef node_hpp
#define node_hpp

using namespace std;

class Node 
{
    int key;
    Node* left;
    Node* right;
    public: 
        Node(void);
        Node(int given_key);
        void change_left_ptr(Node *next_ptr);
        void change_right_ptr(Node *next_ptr);
        Node* return_left();
        Node* return_right();
        int return_key();
        bool compare_key(int given_key);
        void process_data(); 
        
};
#endif
