#include <iostream>
using namespace std;
int main(){
    long long int n = 010101010000101011101;
    int count = 0 ;

    while(n){
        if (n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<count;
    
    return 0;
}