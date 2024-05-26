#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i=2 ; i<n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if (isPrime(num)){
        cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not prime number"<<endl;
    }

    return 0;
}