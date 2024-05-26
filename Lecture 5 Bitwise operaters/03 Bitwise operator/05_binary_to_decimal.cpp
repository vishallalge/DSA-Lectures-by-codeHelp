#include<iostream> 
#include<math.h>

using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int ans = 0, i = 0;
    while(n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2, i);   // we are updating ans when bit will get '1' only
        }
        i++;
        n = n/10;      // we are dividing because we are using modulus operator to get digit
                       // otherwise,in the case of getting bit( use '&' oprator) then we will use right shift '>>'
    }
    cout<<ans;
    return 0;
}