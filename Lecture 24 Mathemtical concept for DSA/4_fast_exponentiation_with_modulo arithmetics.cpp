#include <iostream>
using namespace std;
int main(){
    int x, n , m;
    cout<<"enter the base, power, and modulus for (x^n)%m : ";
    cin>>x>>n>>m;

    int res = 1;
    while(n>0){
        if(n&1){
            //odd
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    cout<<res;
    return 0;
}