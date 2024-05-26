#include <iostream>
using namespace std;

void arithmeticProgration(int n){
    int ans = (3* n+7);
    cout<<"ans: "<<ans;
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    arithmeticProgration(n);
    return 0;
}