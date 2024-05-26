#include<iostream>
using namespace std;

void reverse_arr(int a[], int size){
    int start = 0; 
    int end = size-1; 
    while(start<=end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
    
}

void print_arr(int a[], int size){
    for (int i= 0 ; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverse_arr(arr, 6);
    print_arr(arr, 6);


    return 0;
}