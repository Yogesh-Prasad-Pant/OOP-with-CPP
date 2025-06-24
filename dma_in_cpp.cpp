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