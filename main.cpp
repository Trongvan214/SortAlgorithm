

#include <iostream>	 
#include <cstring>
#include <ctime>
#include <cstdlib>
#include "bubblesort.cpp"
#include "insertionsort.cpp"
#include "quicksort.cpp"
#include "selectsort.cpp"
#include "shellsort.cpp"
#include "bst.hpp"
#include "data.cpp"
using namespace std;

void processArray(data a[], int size);

int main()            
{
    srand(time(0));
    int cInsert = 0, cBubble = 0, cShell = 0, cSelect = 0;
    const int SIZE = 100;
    data array[SIZE];
    string starr[5] = {"banana","apple","orange","mango","watermelon"};
    for(int i = 0; i< SIZE; i++)
    {		
        array[i].key = rand() % 1000000;
        array[i].s = starr[rand()%5];
    };
    insertion(array, SIZE, &cInsert);
    bubble(array, SIZE, &cBubble);
    selectionSort(array, SIZE-1, &cSelect);
    quickSort(array,0, SIZE-1);
    shellSort(array, SIZE-1, &cShell);
    BTS tree;
    for(int i=0;i<SIZE;i++)
    {
        tree.add_leaf(array[i]);
    }
    cout << "Insert" << cInsert << endl;
    cout << "Bubble" << cBubble << endl;
    cout << "Select" << cSelect << endl;
    cout << "Shell" << cShell << endl;
    cout << "Quick" << quickSortCount() << endl;
    cout << "BTS" << tree.return_count() << endl;
	return 0; //returns 0 to the main function to end the program
}

void processArray(data a[], int size)
{
    for (int i=0; i < size; i++)
        cout << a[i].key << " ";
    cout << endl;
    
}
