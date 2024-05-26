#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int ans;
    int i = 0;
    while(n!=0){
        int bit = n & 1;
        cout<<bit<<" ";
        ans = (bit* pow(10, i)) + ans;    // formula for reverse the bits
        n = n>>1;
        i++;
    }
    cout<<"answer: "<<ans;

    return 0;
}