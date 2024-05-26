#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        //space
        int space = n-i;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //number
        int j = 1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        int start = i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        i++;
        cout<<endl;

        
    }
    return 0;
}