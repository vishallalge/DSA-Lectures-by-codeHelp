#include<iostream>
using namespace std;

void fibo(int n){
    int a = 0;
    int b = 1;
    int next_num;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<n; i++){
        next_num = a+b;
        cout<<next_num<<" ";
        a = b;
        b = next_num;
    }
}
int main()
{
    int a ;
    cin>>a;
    fibo(a);
    return 0;
}