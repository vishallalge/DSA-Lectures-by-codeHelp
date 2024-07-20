#include <iostream>
using namespace std;
int main(){
    int x, n;
    cout<<"enter the base, power for (x^n): ";
    cin>>x>>n;

    int res = 1;
    while(n>0){
        if(n&1){
            //odd
            res = (res * x);
        }
        x = (x * x);
        n = n>>1;
    }
    cout<<res;
    return 0;
}