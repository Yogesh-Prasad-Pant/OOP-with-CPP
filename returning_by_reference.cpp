// returning by reference : it is the process of returning the reference of any varible to the calling function.
#include<iostream>
using namespace std;
int c;
int& addition(int a,int b){
     c = a+b;
    return c;
}
int main(){
    int x,y;
    cout<<"enter any two numbers to add : ";

    cin>>x>>y;
    cout<<"sum of "<<x<<" and "<<y<<" is : "<<(addition(x,y))<<endl;
    // assigning 25 to c 's address equivalent to c = 25; because addition(x,y) returns reference to the c;
    addition(x,y)= 25;
    cout<<endl<<"value after change"<<c;
    return 0;
}