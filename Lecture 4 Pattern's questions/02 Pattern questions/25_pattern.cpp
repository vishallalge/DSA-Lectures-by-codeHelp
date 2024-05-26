#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int i = 1;
    while(i<=n){
        //space
        int space = i - 1;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        //star
        int star = n+1-i;
        while(star){
            cout<<"*" <<" ";
            star--;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}