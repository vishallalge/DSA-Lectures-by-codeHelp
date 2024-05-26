#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 2;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<endl;
    a = a-b;
    b = a+b;
    a = b-a;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<endl;

    return 0;
}