#include <iostream>	
#include "bubble.hpp" 

using namespace std; 

void exchange2(data list[],int i,int j);

Bubble::Bubble(data list[], int size)
{
    sort(list,size);
}

void Bubble::sort(data list[], int size)
{
    //loop through the length of the array
    for (int i = 0; i < size; i++) 
    {   
        for (int i = 0; i < size-1; i++) 
        {
            // increment the operations 
            count++;
            
            // swap if left is bigger than right
            if (list[i].key > list[i+1].key) 
            {
                // calls the swap function
                exchange2(list,i,i+1); 
            }
            
        }
    }
}
//return the count 
int Bubble::return_count()
{
    return count;
}

//swamp the values at the given array locations
//share with all sort
void exchange2(data list[],int i,int j)
{
    data temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}
