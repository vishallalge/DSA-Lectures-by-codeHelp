#include <iostream>
using namespace std;

void printCounting(int n){
    for (int i = 1 ; i<=n; i++){
        cout<<i<<" ";
    }
}

int main(){
    int a;
    cin>>a;
    printCounting(a);



    return 0;
}