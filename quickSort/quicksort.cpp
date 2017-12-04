#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std; 

//prototypes
void quickSort(int list[], int left, int right);
void exchange(int list[],int i, int j);
int partition(int list[], int left, int right);

int main()
{
    //ramdom seed generator 
    srand(time(0));
    const int ARRSIZE = 1000;
    int arr[ARRSIZE];
    //put in randoms numbers
    for(int i=0;i<ARRSIZE;i++)
    {
        arr[i] = rand()%10000;
    }
    quickSort(arr,0,ARRSIZE);
    for(int j=0;j<ARRSIZE;j++)
    {
        cout << arr[j] << endl;
    }
}
void quickSort(int list[], int left, int right)
{
    //jump out of the void function (mean this part is sorted)
    if(left >= right)
    {
        return;
    }
    int arrPart = partition(list,left,right);
    //arrPart-1 cause the return value is the middle and sorted
    quickSort(list,left,arrPart-1);
    //arrpart+1 for the same reason
    quickSort(list,arrPart+1,right);
    
}
//function that move arround a small piece of the list
int partition(int list[], int left, int right) {
    int mid = left + (right - left) / 2;
    int pivot = list[mid];
    //put pivot in value in the left
    exchange(list, mid, left);
    //left+1 cause pivot is at index 0
    int i = left + 1;
    int j = right;
    while (i <= j) {
        //left find value that's greater
        while(i <= j && list[i] <= pivot) {
            i++;
        }
        //right find the value that's less than pivot
        while(i <= j && list[j] > pivot) {
            j--;
        }
        //exchange them 
        if (i < j) {
            exchange(list,i,j);
        }
    }
    //put pivot back in the middle (i-1) is the middle
    exchange(list,i-1,left);
    //return middle of this partition
    return i - 1;
}

//function that let you swap the values at ith spot of list
void exchange(int list[], int i, int j)
{
    //a value holder so i doesn't get lost in the process
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
    
}

