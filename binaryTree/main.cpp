#include <iostream>
#include <ctime>
#include <cstdlib>

#include "binary_tree.hpp"

using namespace std; 

int main()
{
    srand(time(0));
    Binary_tree BTS;
    for(int i=0;i<50;i++)
    {
        int num = rand()%500;
        BTS.add_leaf(num);
    }
    BTS.print_in_order();
    return 0;
}
