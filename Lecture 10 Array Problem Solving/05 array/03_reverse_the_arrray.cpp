#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    for(int i = 0; i<size; i++){
        while(start <= end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

}


int main(){
    int arr[5] = {5,4,3,2,1};
    printArray(arr, 5);
    reverseArray(arr, 5);
    printArray(arr, 5);
    return 0;
}