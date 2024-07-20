#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 1; i<n; i++){
        for (int j = 0; j<n-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);

            }
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
    bubble_sort(arr, 5);
    display(arr, 5);
    return 0;
}