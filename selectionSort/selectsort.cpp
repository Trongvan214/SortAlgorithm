#include <iostream>
using namespace std; 

//prototypes
void selectionSort(data list[], int last, int* analysis);
void exchange(data list[], int i, int j);

//sort the give list given
void selectionSort(data list[], int last, int* count)
{
    int smallest, walker, curr = 0;
    while(curr <= last)
    {        
        smallest = curr;
        //walker = curr++; increase curr 
        walker = curr + 1;
        while(walker <= last)
        {
            //1 operation done 
            (*count)+=1;
            
            //if walker value is less than curr smallest value
            if(list[walker].key < list[smallest].key)
            {
                smallest = walker;
            }
            walker++;
        }
        exchange(list,curr,smallest);
        curr++;
    }
    
}
//swamp the values at the given array locations
void exchange(data list[],int i,int j)
{
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

