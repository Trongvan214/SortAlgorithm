#include <iostream>
#include "selection.hpp"

using namespace std; 
void exchange1(data list[],int i,int j);

Selection::Selection(data list[], int size)
{
    count = 0;
    sort(list,size);
}
void Selection::sort(data list[], int size)
{
    int smallest, walker, curr = 0;
    while(curr < size)
    {        
        smallest = curr;
        //walker = curr++; increase curr 
        walker = curr + 1;
        while(walker < size)
        {
            //increase operation
            count+=1;
            
            //if walker value is less than curr smallest value
            if(list[walker].key < list[smallest].key)
            {
                smallest = walker;
            }
            walker++;
        }
        exchange1(list,curr,smallest);
        curr++;
    }
}
//return the count 
int Selection::return_count()
{
    return count;
}

//swamp the values at the given array locations
//share with all sort
void exchange1(data list[],int i,int j)
{
    data temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

