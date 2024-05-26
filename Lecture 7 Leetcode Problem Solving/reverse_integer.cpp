#include <iostream>
using namespace std;
int main(){
    int n = 1234567899;
    int ans = 0;
    while(n != 0){
        int digit = n%10;
        ans = (ans*10)+digit;
        if ((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            // cout<<"your reverse integer is out of the range";
            return 0;
        }
        n = n/10;
    }
    cout<<ans;
    return 0;
}