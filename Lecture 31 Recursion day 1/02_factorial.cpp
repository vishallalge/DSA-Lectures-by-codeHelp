#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int small_pro = factorial(n-1);
    int big_pro = n*small_pro;
    return big_pro;
}

int main(){
    int n = 6;
    int ans = factorial(n);
    cout<<"ans: "<<ans;
    return 0;
}