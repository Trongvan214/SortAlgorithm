#ifndef __INSERTION__
#define __INSERTION__

#include <fstream>
#include "data.hpp"

class Insertion 
{
    //count the number of operation
    int count;
    void sort(data list[], int size);
    public: 
        Insertion(data list[], int size);
        int return_count();
        void print(ostream& stream);
};
#endif
