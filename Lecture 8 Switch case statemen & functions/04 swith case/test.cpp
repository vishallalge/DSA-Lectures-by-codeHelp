#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int count = 0;
    while(a!=0){

    if(a&1){
        count++;
    }
        a = a>>1;
    }
    cout<<count;
    return 0;
}