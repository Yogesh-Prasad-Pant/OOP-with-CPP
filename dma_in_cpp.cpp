/*DMA is a technique or method of allocating the memory during execution of a program 
syntax: pointer_variable = new data_type;
//for single block  or single data 
// for deallocating or freeing  this memeory location use following syntax.
// syntax: delete pointer_variable;
//if we need multiple data to save or multiple location to allocate then use .
syntax: pointer_variable = new data_type[n];
// where n is number of block of that data type i.e. how many location to be allocated.
// for deallocate these type of memory allocation we use 
syntax: delete[] pointer_variable; */


#include<iostream>
using namespace std;
int main(){
    int i;
    int*ptr = new int[4];
    *ptr = 1;
    *(ptr+1) = 4;
    *(ptr+2) = 412;
    *(ptr+3) = 47;
    for(i=0;i<4;i++)
    cout<<" "<<*(ptr+i)<<",";
    delete[] ptr;
    return 0;

}