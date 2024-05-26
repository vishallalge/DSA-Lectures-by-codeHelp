#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;
    char ch;
    while(i<=n){
        int j = 1;
        ch = 'A' +(i-1);     //   <---
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}