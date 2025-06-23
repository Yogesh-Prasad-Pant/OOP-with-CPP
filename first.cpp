// namespace is a way or technique to avoid naming conflict.
// the std namespace contains objects, memeber function for eg cin cout etc which are used in program for input and output
#include<iostream>
//for defining that we are using the memeber of std they are cin and cout
using namespace std; 
int main(){
    cout<<"Hellow word ! This is first cpp program"<<endl;
    int i;
    cout<<"Enter any integer : ";
    cin>>i;
    cout<<"entered value is "<<i;
    return 0;
}