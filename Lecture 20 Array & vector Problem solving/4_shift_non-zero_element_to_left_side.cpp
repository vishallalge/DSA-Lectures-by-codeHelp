#include<iostream>
using namespace std;
int main(){
    int arr[8] = { 2,0,6,0,7,0,0,0};
    int i = 0;
    for (int j = 0; j<8; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
    for (int i = 0; i <8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}