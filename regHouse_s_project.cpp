//House Registration system using c++ and learning concept of class
#include<iostream>
using namespace std;
enum model {rock,wood,concrete};
class home{
    private:
        int room_no;
        string address;
        model h_model;
    public:
    void house_safety(){
        if(h_model==rock){
      cout<<"safety is low"<<endl;
        }
        else if(h_model==wood){
            cout<<"safety is medium"<<endl;
        }
        else{
            cout<<"safety is better"<<endl;
        }
    }  
    void register_house(int r,string a,model m){
      room_no =r;
      address=a;
      h_model= m;

    } 
    void show_house(){
        cout<<"house detail"<<endl<<"address:"<<address<<endl<<"room_no:"<<room_no<<endl;
        cout << "house-model: ";
    switch (h_model) {
        case rock: cout << "rock"; break;
        case wood: cout << "wood"; break;
        case concrete: cout << "concrete"; break;
        default: cout << "unknown"; break;
    } 
    cout<<endl;   
} 


};
int main(){
    home h1;
    int room_num;
    string add;
    model house_struct;
    string house;
    cout<<"enter your house detail(address-,room-num ,house-model(rock,concrete,wooden)):";
    
    cin>>add>>room_num>>house;
     if (house == "rock")
        house_struct = rock;
    else if (house == "wood")
        house_struct = wood;
    else if (house == "concrete")
        house_struct = concrete;
    else {
        cout << "Invalid house model!" << endl;
        return 1;
    }
    h1.register_house(room_num,add,house_struct);
   h1.show_house();
   h1.house_safety();
    return 0;
}
