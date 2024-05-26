#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int i = 1;
    while(i<=n){
        // first
        int j = 1;
        while(j<=(n-i+1)){
            cout<<j<<" ";
            j++;
        }
        //second
        int star = i - 1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        //third
        int star1 = i - 1;
        while(star1){
            cout<<"*"<<" ";
            star1--;
        }
        //fourth
        int k = 1;
        int temp = n-i+1;
        while(k<=n-i+1){
            cout<<temp<<" ";
            temp--;
            k++;
        }    
        i++;
        cout<<endl;
    }
    return 0;
}