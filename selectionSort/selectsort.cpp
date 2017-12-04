#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std; 

//prototypes
void selectionSort(int list[], int last, int* analysis);
void exchange(int list[], int i, int j);

int main()
{
    srand(time(0));
    const int ARRSIZE = 10; 
    int arr[ARRSIZE];
    int analysis = 0;
    //put random values inside
    for(int i=0;i<ARRSIZE;i++)
    {
        arr[i] = rand()%100;
    }
    selectionSort(arr,ARRSIZE-1,&analysis);
    //print out the sorted array 
    for(int i=0;i<ARRSIZE;i++)
    {
        cout << arr[i] <<  " ";
    }
    cout << endl;
    cout << "total operation (" <<ARRSIZE<<" array) do " << analysis << endl;
    cout << "total operation (" <<ARRSIZE<<" array) calc "; 
    cout << ARRSIZE*ARRSIZE << endl;
    return 0;
}
//sort the give list given
void selectionSort(int list[], int last, int* count)
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
            if(list[walker] < list[smallest])
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
void exchange(int list[],int i,int j)
{
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

