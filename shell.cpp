#include <iostream>

#include "shell.hpp"

using namespace std;

//function to sort arr using shellSort 
Shell::Shell(data list[], int size)
{
    count = 0;
    sort(list,size);
}
void Shell::sort(data list[], int size)
{
    // Start with a big gap, then reduce the gap
    for (int gap = size/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; i++)
        {
            //increase operation
            count+=1;
            
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
//return the count 
int Shell::return_count()
{
    return count;
}

