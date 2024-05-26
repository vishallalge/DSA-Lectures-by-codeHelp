#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;
    char start;
    while(i<=n){
        int j = 1;
        while(j<=i){
            start = 'A' + (i+j-2);     //   <---
            cout<<start<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}