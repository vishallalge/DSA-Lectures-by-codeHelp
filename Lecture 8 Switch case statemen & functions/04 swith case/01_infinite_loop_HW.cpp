#include<iostream>
using namespace std;
int main(){

    int n = 2;
    while(1){
        switch(n){
            case 1:
                cout<<"one"<<endl;
            case 2: 
                cout<<"two"<<endl;
            default:
                exit(0);
        }
    }
    return 0;
}