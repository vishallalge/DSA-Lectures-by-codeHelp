#include <iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Amount: ";
    cin>>amount;
    int a;

    switch(1){
        case 1:{
            if(amount>=100){
                a = amount/100;
                cout<<"need "<<a<<" nots of 100."<<endl;
                amount = amount - (a*100);
            }
        }
        case 2:{
                if(amount>=50){

                a = amount/50;
                cout<<"need "<<a<<" nots of 50."<<endl;
                amount = amount - (a*50);
                }
            }
        case 3:{
                if(amount>=20){

                a = amount/20;
                cout<<"need "<<a<<" nots of 20."<<endl;
                amount = amount - (a*20);
                }
            }
        case 4:{
                if(amount>=1){

                a = amount/1;
                cout<<"need "<<a<<" nots of 1."<<endl;
                amount = amount - (a*1);
                }
            }
        }
    return 0;
}