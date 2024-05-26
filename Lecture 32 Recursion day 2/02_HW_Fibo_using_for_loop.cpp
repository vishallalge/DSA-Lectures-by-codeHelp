#include <iostream>
using namespace std;
int main(){
    int n = 8;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b;
    for(int i=0; i<n-1; i++){
        int ans = a + b;
        cout<<" "<<ans;
        a = b;
        b = ans;
    }
    return 0;
}


/// complete this problem imediately 
//  otherwise you will loss resursion 
// problem:-  number --> 412
///           print four one two by storing one to nine in sting array
