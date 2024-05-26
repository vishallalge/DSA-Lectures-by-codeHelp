#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int i = 1;
    while(i<=n){
        //star
        int star = n+1-i;
        while(star){
            cout<<"*" <<" ";
            star--;
        }
        //space
        int space = i - 1;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}