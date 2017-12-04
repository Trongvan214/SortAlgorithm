#include <iostream>
#include <ctime>
#include <cstdlib>

#include "bst.hpp"

using namespace std; 

int main()
{
    srand(time(0));
    BTS t;
    for(int i=0;i<50;i++)
    {
        int num = rand()%500;
        t.add_leaf(num);
    }
    t.print_in_order();
    return 0;
}
