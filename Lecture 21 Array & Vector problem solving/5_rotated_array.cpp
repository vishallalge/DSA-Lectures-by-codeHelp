#include<iostream>
using namespace std;
int main(){

    // move each element by the difference of value of k and modify it
    
    int k= 4;
    int temp[5];
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        temp[(i+k)%5] = arr[i]; 
    }
    arr[5] = temp[5];

    for(int i = 0; i<5; i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}