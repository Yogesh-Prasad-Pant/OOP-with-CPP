// object as a function argument
#include<iostream>
using namespace std;
class distanc{
    public:
    int foot;
    int inches;
    distanc(int f=0,int i=0){
            foot = f+(int)i/12;
            inches = i%12;
    }
    void show(){
        cout<<foot<<"\'"<<inches<<"\"";
    }
};
distanc d3;
distanc dc;
distanc add(distanc d1,distanc d2){
    d3.foot = (d1.inches + d2.inches)/12 + d1.foot + d2.foot;
    d3.inches = (d1.inches+d2.inches)%12;
    return d3;
}
int main(){
    int f1,f2,i1,i2;
    cout<<"enter distance d1 in feet and inches  to add with distance d2:";
    cin>>f1>>i1;
    cout<<"enter distance d2";
    cin>>f2>>i2;
    distanc da(f1,i1),db(f2,i2);
    dc = add(da,db);
    cout<<"\nthe sum of distances d1 = ";
    da.show();
    cout<<" and d2 = ";
    db.show();
    cout<<" is : ";
    dc.show();
   return 0;
}