#ifndef __BUBBLE__ 
#define __BUBBLE__

#include <fstream>
#include "data.hpp"
class Bubble 
{
    //count the number of operation
    int count;
    void sort(data list[], int size);
    public: 
        Bubble(data list[], int size);
        int return_count();
        void print(ostream& stream);
};
#endif
