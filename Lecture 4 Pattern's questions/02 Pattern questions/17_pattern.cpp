#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;
    char start = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<start<<" ";
            j++;
            start = start + 1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}