#include "insertion.hpp"

using namespace std;

Insertion::Insertion(data list[], int size)
{
    count = 0;
    sort(list,size);
}
void Insertion::sort(data list[], int size)
{
   int hold, walker;
   for (int curr = 1; curr < size; curr++)
   {
	   count+=1;
       hold = list[curr].key;
       walker = curr - 1;
 
       while (walker >= 0 && list[walker].key > hold)
       {
            count+=1;
           list[walker +1].key = list[walker].key;
           walker = walker - 1;
       }
       list[walker + 1].key = hold;
	   count+=1;
   }
}
//return the count 
int Insertion::return_count()
{
    return count;
}
