#ifndef __QUICK__
#define __QUICK__

#include <iostream>
#include "data.cpp"
using namespace std; 
//user global variable for count cuz inside doesn't work
//professor permission
int count = 0;

//function that move arround a small piece of the list
int partition(data list[], int left, int right) {
    int mid = left + (right - left) / 2;
    int pivot = list[mid].key;
    //put pivot in value in the left
    exchange(list, mid, left);
    //left+1 cause pivot is at index 0
    int i = left + 1;
    int j = right;
    while (i <= j) 
    {
        //left find value that's greater
        while(i <= j && list[i].key <= pivot) {
            i++;
        }
        //right find the value that's less than pivot
        while(i <= j && list[j].key > pivot) {
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

void quickSort(data list[], int left, int right)
{
    count+=1;
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
//return the operation count
int quickSortCount()
{
    return count;
}

#endif

