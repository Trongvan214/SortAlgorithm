#ifndef __SHELL__
#define __SHELL__

#include <iostream>
#include "data.cpp"

using namespace std;

//function to sort arr using shellSort 
void shellSort(data list[], int last, int* count)
{
    // Start with a big gap, then reduce the gap
    for (int gap = last/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i <= last; i++)
        {
            //increase operation
            (*count)+=1;
            
            int temp = list[i].key;
            int j = i;            
            while(j >= gap && list[j - gap].key > temp)
            {
                list[j].key = list[j - gap].key;
                j-=gap;
            }
            // put temp (the original a[i]) in its correct location
            list[j].key = temp;
        }
    }
}

#endif
