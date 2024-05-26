#include<iostream>
using namespace std;
int main(){
// in this problem we are showing is this array is cyclic and sorted or not
// means when using this array draw an graph
// then you can understand in this problem what is happening
// In graph two lines will form and first line's starting point
// should match with ending point of the second's line  

    int count = 0;
    int n = 5;
    int arr[n] = {1,1,1,1,1};
    for(int i = 1; i < n; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    if(count <= 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}