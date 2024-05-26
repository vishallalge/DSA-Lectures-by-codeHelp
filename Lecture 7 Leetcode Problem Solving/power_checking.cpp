#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n = 4;
    int ans = 1 ;
    for(int i = 0; i<=30; i++){
        if (ans <INT_MAX/2){
        ans = ans*2;
        }
        // ans = pow(2,i);
        
        cout<<ans<<endl;
        if(ans == n){
            cout<<"this no. is lies on this series"<<endl;
            // break;
        }
        // else{
        // cout<<"this no. is not in this series"<<endl;
        // }
    }
    return 0 ;
}