#include <iostream>
using namespace std;
int main(){
    int n = 4;
    // cout<<"n: ";
    // cin>>n;
    int count = 1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}