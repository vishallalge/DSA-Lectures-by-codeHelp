#include <iostream>
using namespace std;
int main(){
    int n = 4;
    // cout<<"n: ";
    // cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}