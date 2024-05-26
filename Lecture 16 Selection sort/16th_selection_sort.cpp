#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){

    for (int i = 0; i<n-1; i++){
        int miniIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex = j;
            }
            swap(arr[miniIndex], arr[i]);
        }
    }
}

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[5] = {5,4,3,2,1};
    selection_sort(arr, 5);
    display(arr, 5);
    return 0;
}