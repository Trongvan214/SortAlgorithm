#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

void shellSort(int list[], int last);

int main()
{
    srand(time(0));
    const int ARRSIZE = 100; 
    int arr[ARRSIZE];
    //put random values inside
    for(int i=0;i<ARRSIZE;i++)
    {
        arr[i] = rand()%10000;
    }
    shellSort(arr,ARRSIZE-1);
    //print out the sorted array 
    for(int i=0;i<ARRSIZE;i++)
    {
        cout << arr[i] <<  " ";
    }
    cout << endl;
    return 0;
}

//function to sort arr using shellSort 
void shellSort(int list[], int last)
{
    // Start with a big gap, then reduce the gap
    for (int gap = last/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i <= last; i++)
        {
            int temp = list[i];
            int j = i;            
            while(j >= gap && list[j - gap] > temp)
            {
                list[j] = list[j - gap];
                j-=gap;
            }
            // put temp (the original a[i]) in its correct location
            list[j] = temp;
        }
    }
}
