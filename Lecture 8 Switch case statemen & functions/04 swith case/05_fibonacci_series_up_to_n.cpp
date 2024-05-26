#include <iostream>
using namespace std; 

void fibonacci(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int nextNum;
    for(int i = 2; i<n; i++){
        nextNum = a+b;
        a = b;
        b = nextNum;
        cout<<nextNum<<" ";
    }
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    fibonacci(n);
    return 0;
}