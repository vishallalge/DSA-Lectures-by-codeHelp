#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        // we are using here 'j+1' beacuse we decriment j at the time of exiting the while loop
        arr[j+1] = temp;
    }
}

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[5] = {5,4,3,2,1};
    insertion_sort(arr, 5);
    display(arr, 5);
    return 0;
}