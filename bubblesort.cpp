#ifndef __BUBBLE__
#define __BUBBLE__

#include <iostream>	   //this lets us use streams	
#include "data.cpp"

using namespace std;           //using the standard namespace
//bubble sort function 
void bubble(data a[], int l, int *n)
{
	
	for (int i = 0; i < l; i++) //loop through the length of the array
	{   
		for (int i = 0; i < l-1; i++) 
		{
			(*n) +=1;  // increment the operations 
			   
			if (a[i].key > a[i+1].key) // swap if left is bigger than right
			{
				exchange(a,i,i+1); // calls the swap function
			}
				
		}
	}
}
#endif

