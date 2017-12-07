#ifndef __DATA__
#define __DATA__

#include <string> 	   //this lets us use the string variable
using namespace std;

struct data
{
	int key;
	string s;
};

//swamp the values at the given array locations
//share with all sort
void exchange(data list[],int i,int j)
{
    data temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

#endif 
