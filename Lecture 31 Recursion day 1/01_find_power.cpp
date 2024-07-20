#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;   //-->> base case
    }
    int small_pro = power(n-1);
    int big_pro = 2*small_pro;
    return big_pro;

}
int main(){
    int n = 3;
    //int pow = 3;
    int ans = power(n);
    cout<<"ans: "<<ans;
    return 0;
}