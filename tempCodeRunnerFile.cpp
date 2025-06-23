/*what is function overloading 
function overloading is the process of defining multiple function having same name but different return type and parameters.
for eg. area function can be used for calculating area of multiple geometrical shapes.
*/
#include<iostream>
using namespace std;
void area(float x,float y){cout<<(x*y);}
void area(float r){(cout<<r*r*3.1415);}
int main(){
    int a;
    float ra,b,c;
    cout<<"Enter the radius of circle to find area : ";
    cin>>ra;
    cout<<"area of a the circle having radius r = "<<ra<<" is "<<area(ra);
    cout<<endl;<<"enter the size of rectangle to calcualte the area :";
    cin>>b>>c;
    cout<<"the area of rectangle having side b = "<<b<<" and side c = "<<c<<" is"<<area(b,c);
    return 0;
}
