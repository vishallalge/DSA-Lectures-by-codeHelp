#include <iostream>
using namespace std;

void series(int n){
    if(n==0){
        return;
    }
    cout<<n;      //---> head recursive function
    series(n-1);
    cout<<" "<<n; //---> tail recursive function 
}

int main(){
    int n = 9;
    series(n);
    return 0;
}