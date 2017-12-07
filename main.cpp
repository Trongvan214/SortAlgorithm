#include <iostream>	 
#include <cstring>
#include <ctime>
#include <cstdlib>
#include "quick.hpp"
#include "shell.hpp"
#include "bubble.hpp"
#include "insertion.hpp"
#include "selection.hpp"
#include "bst.hpp"

using namespace std;

void processArray(data a[], int size);

int main()            
{
    srand(time(0));
    const int SIZE = 100;
    data array[SIZE];
    string starr[5] = {"banana","apple","orange","mango","watermelon"};
    for(int i = 0; i< SIZE; i++)
    {		
        array[i].key = rand() % 340;
        array[i].s = starr[rand()%5];
    };
    Quick q(array,SIZE);
    q.sort();
    q.print(cout);
    Shell sl(array,SIZE);
    Bubble b(array,SIZE);
    Insertion i(array,SIZE);
    Selection st(array,SIZE);
    //tree don't allow duplicate
    BTS tree;
    for(int i=0;i<SIZE;i++)
    {
        tree.add_leaf(array[i]);
    }
    tree.print_in_order();
    cout << "Insert" << i.return_count() << endl;
    cout << "Bubble" << b.return_count() << endl;
    cout << "Select" << st.return_count() << endl;
    cout << "Shell" << sl.return_count() << endl;
    cout << "Quick" << q.return_count() << endl;
    cout << "BTS" << tree.return_count() << endl;
	return 0; //returns 0 to the main function to end the program
}

void processArray(data a[], int size)
{
    for (int i=0; i < size; i++)
        cout << a[i].key << " ";
    cout << endl;
    
}
