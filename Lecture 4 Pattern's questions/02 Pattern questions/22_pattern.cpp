#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    return 0;
}