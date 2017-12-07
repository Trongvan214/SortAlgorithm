#ifndef __INSERTION__
#define __INSERTION__

#include <fstream>     //this is so we can write and read from a file   
#include <stdlib.h>    //this lets us use random number generator
#include <stdio.h>
#include <math.h>
#include "data.cpp"
using namespace std;           //using the standard namespace


void insertion(data a[], int l, int *o)
{
   int hold, walker;
   
   for (int curr = 1; curr < l; curr++)
   {
	   (*o) += 1;
       hold = a[curr].key;
       walker = curr - 1;
 
       while (walker >= 0 && a[walker].key > hold)
       {
		   (*o) += 1;
           a[walker +1].key = a[walker].key;
           walker = walker - 1;
       }
       a[walker + 1].key = hold;
       (*o) += 1;
   }
}

#endif
