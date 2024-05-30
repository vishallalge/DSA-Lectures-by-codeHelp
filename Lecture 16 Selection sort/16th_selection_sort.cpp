#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

    for (int i = 0; i<n-1; i++){
        int miniIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[miniIndex]>arr[j]){
                miniIndex = j;
            }
            swap(arr[i], arr[miniIndex]);
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[5] = {4,3,3,2,1};
    selection_sort(arr, 5);
    display(arr, 5);
    return 0;
}