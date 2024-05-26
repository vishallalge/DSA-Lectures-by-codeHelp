#include <iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a>b)?a:b;
}

// benifit of inline function: 
// 1. no extra memor usage 
// 2. no function call overhead

int main(){

    int a = 4, b = 5;
    int ans = getMax(a, b);
    cout<<ans;

    return 0;
}